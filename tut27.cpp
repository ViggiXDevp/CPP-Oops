#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int calculator ::sumCompComplex(Complex o1, Complex o2);

    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setnumber(3, 4);
    o2.setnumber(5, 9);
    calculator calc, comp;
    int real = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << real << endl;
    int img = comp.sumCompComplex(o1, o2);
    cout << "The sum of imaginary part of o1 and o2 is " << img << endl;
    return 0;
}