#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    
public:
    // Creating a Constructor
    // Constructor is a special member function with same name as of the class.
    // It is automatically invoked whenever an object is created.
    // It is used to initialise the objects of its class.
     
    Complex(void); // Constructor declaration
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(void) // ----> This is a Default Constructor (as it accepts no value)
{
    a = 10;
    b = 10;
    cout << "Hello World" << endl;
}
int main()
{
    Complex c;
    c.printnumber();
    return 0;
}

// Characterstics of the Constructor
// 1. It should be declared in the Public section of the class
// 2. They are automatically invoked when the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5. We cannot refer to their address