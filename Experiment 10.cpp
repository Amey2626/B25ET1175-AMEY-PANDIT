#include <iostream>
#include <string>
#include <stdexcept>

// Custom Exception Class inheriting from std::invalid_argument
class NegativeSalaryException : public std::invalid_argument {
public:
    explicit NegativeSalaryException(double salary)
        : std::invalid_argument("Invalid Input: Salary cannot be negative (Entered: $" + std::to_string(salary) + ")") {}
};

class Employee {
private:
    int id;
    std::string name;
    double salary;

public:
    void getDetails() {
        std::cout << "Enter Employee ID: ";
        std::cin >> id;
        std::cin.ignore(); // Clear newline buffer

        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, name);

        std::cout << "Enter Monthly Salary: ";
        std::cin >> salary;

        // Throw an exception if salary is negative
        if (salary < 0) {
            throw NegativeSalaryException(salary);
        }
    }

    void displayDetails() const {
        std::cout << "\n--- Employee Profile ---" << std::endl;
        std::cout << "ID     : " << id << std::endl;
        std::cout << "Name   : " << name << std::endl;
        std::cout << "Salary : $" << salary << std::endl;
    }
};

int main() {
    Employee emp;

    try {
        // Enclose code that might throw an exception inside the try block
        emp.getDetails();
        emp.displayDetails();
    }
    catch (const NegativeSalaryException& e) {
        // Catch and handle the specific negative salary exception
        std::cout << "\n[EXCEPTION CAUGHT] " << e.what() << std::endl;
        std::cout << "Operation aborted. Please restart and enter a valid positive salary." << std::endl;
    }
    catch (const std::exception& e) {
        // Fallback for any other standard exceptions
        std::cout << "\n[GENERAL EXCEPTION] " << e.what() << std::endl;
    }

    return 0;
}
