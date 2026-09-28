#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    void getNumber() {
        std::cout << "Enter real part: ";
        std::cin >> real;
        std::cout << "Enter imaginary part: ";
        std::cin >> imag;
    }
    Complex operator+(const Complex& obj) const {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};
int main() {
    Complex c1, c2, c3, sum;
    std::cout << "Enter first complex number:\n";
    c1.getNumber();
    std::cout << "\nEnter second complex number:\n";
    c2.getNumber();
    std::cout << "\nEnter third complex number:\n";
    c3.getNumber();
    sum = c1 + c2 + c3;
    std::cout << "\n-----------------------------\n";
    std::cout << "First Number:  "; c1.display();
    std::cout << "Second Number: "; c2.display();
    std::cout << "Third Number:  "; c3.display();
    std::cout << "-----------------------------\n";
    std::cout << "Sum:           "; sum.display();
    return 0;
}
