#include <iostream>
using namespace std;
class Complex
{
    float real, imag;
public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    Complex C1(3, 2);
    Complex C2(4, 5);
    Complex C3;
    C3 = C1 * C2;
    cout << "First Complex Number: ";
    C1.display();
    cout << "Second Complex Number: ";
    C2.display();
    cout << "Multiplication: ";
    C3.display();
    return 0;
}

