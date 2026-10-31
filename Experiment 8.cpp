#include <iostream>
#include <string>

class EmployeeBasicInfo {
protected:
    int empId;
    std::string empName;
    std::string designation;

public:
    void getBasicInfo() {
        std::cout << "--- Enter Basic Employee Details ---" << std::endl;
        std::cout << "Enter Employee ID: ";
        std::cin >> empId;
        std::cin.ignore(); 
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, empName);
        std::cout << "Enter Designation: ";
        std::getline(std::cin, designation);
    }

    void displayBasicInfo() const {
        std::cout << "Employee ID   : " << empId << std::endl;
        std::cout << "Name          : " << empName << std::endl;
        std::cout << "Designation   : " << designation << std::endl;
    }
};

class EmployeeLeaveInfo {
protected:
    int totalLeaves;
    int leavesTaken;

public:
    void getLeaveInfo() {
        std::cout << "\n--- Enter Leave Details ---" << std::endl;
        std::cout << "Enter Total Allotted Leaves: ";
        std::cin >> totalLeaves;
        std::cout << "Enter Leaves Taken: ";
        std::cin >> leavesTaken;
    }

    void displayLeaveInfo() const {
        std::cout << "Total Leaves  : " << totalLeaves << std::endl;
        std::cout << "Leaves Taken  : " << leavesTaken << std::endl;
    }
};

class EmployeeLeaveSummary : public EmployeeBasicInfo, public EmployeeLeaveInfo {
public:
    
    int calculateRemainingLeave() const {
        return totalLeaves - leavesTaken;
    }

    void displaySummary() const {
        std::cout << "\n====================================" << std::endl;
        std::cout << "       EMPLOYEE LEAVE REPORT        " << std::endl;
        std::cout << "====================================" << std::endl;
        displayBasicInfo();
        displayLeaveInfo();
        std::cout << "Remaining Leave Balance: " << calculateRemainingLeave() << std::endl;
        std::cout << "====================================" << std::endl;
    }
};

int main() {
    EmployeeLeaveSummary emp;

    emp.getBasicInfo();
    emp.getLeaveInfo();

    emp.displaySummary();

    return 0;
}
