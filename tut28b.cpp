#include <iostream>
using namespace std;
class c2;

class c1
{
    int val1;

public:
    friend void exchange(c1 &x, c2 &y);
    void indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;

public:
    friend void exchange(c1 &x, c2 &y);
    void indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
/*
Trick to swap 2 numbers a and b:
temp = a;
a = b;
b = temp;
*/
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 o1;
    o1.indata(31);

    c2 o2;
    o2.indata(56);

    cout << "The value of c1 before exchanging becomes: ";
    o1.display();
    cout << "The value of c2 before exchanging becomes: ";
    o2.display();
    
    exchange(o1, o2);

    cout << "The value of c1 after exchanging becomes: ";
    o1.display();
    cout << "The value of c2 after exchanging becomes: ";
    o2.display();
    return 0;
}