#include <iostream>
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}
int main() {
    int int1 = 10, int2 = 20;
    double double1 = 3.14, double2 = 9.81;
    std::cout << "--- Integer Swap ---" << std::endl;
    std::cout << "Before swap: int1 = " << int1 << ", int2 = " << int2 << std::endl;
    swap(int1, int2); 
    std::cout << "After swap:  int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << std::endl;
    std::cout << "--- Floating-Point Swap ---" << std::endl;
    std::cout << "Before swap: double1 = " << double1 << ", double2 = " << double2 << std::endl;
    swap(double1, double2); 
    std::cout << "After swap:  double1 = " << double1 << ", double2 = " << double2 << std::endl;
    return 0;
}
