#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int x, int y); // Constructor declaration
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(int x, int y) // ----> This is a Parametrized Constructor (as it takes 2 parameters)
{
    a = x;
    b = y;
     
}
int main()
{
    // Implicit call
    Complex a(9, 8);
    a.printnumber();

    // Explicit call
    Complex b = Complex(3, 4);
    b.printnumber();
    return 0;
}