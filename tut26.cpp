#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
     /*Below line means that non member functions - subcomplex function is
      allowed to do anything with my private members.*/
    friend Complex subcomplex(Complex o1, Complex o2);
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex subcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setnumber(9, 8);
    c1.printnumber();

    c2.setnumber(1, 2);
    c2.printnumber();

    sum = subcomplex(c1, c2);
    sum.printnumber();
    return 0;
}   

/* Properties of friend functions
1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.subcomplex == invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared in Public or Private section of the class
6. It cannot access the member directly by their names and need object_name.member_name to access the member.
*/