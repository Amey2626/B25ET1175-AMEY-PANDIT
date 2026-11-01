Implementation of class and function templates in C++.
Code:- 

#include <iostream>
using namespace std;

// Function template to find the larger of two values
template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}
// Class template to store and display a value
template <class T>
class Sample
{
    T value;
public:
    // Constructor to initialize the value
    Sample(T v)
    {
        value = v;
    }
    // Function to display the value
    void display()
    {
        cout << "Value = " << value << endl;
    }
};
int main()
{
    int a, b, num;
    float x, y, decimal;
    // Function template with integer values
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Maximum Integer = " << maximum(a, b) << endl;
    // Function template with float values
    cout << "Enter two decimal values: ";
    cin >> x >> y;
    cout << "Maximum Float = " << maximum(x, y) << endl;
    // Class template with integer value
    cout << "Enter an integer value: ";
    cin >> num;
    Sample<int> s1(num);
    s1.display();
    // Class template with float value
    cout << "Enter a decimal value: ";
    cin >> decimal;
    Sample<float> s2(decimal);
    s2.display();

    return 0;
}
