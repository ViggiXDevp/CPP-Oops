#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
    Test(int i, int j) : a(i), b(j)
    {
        constructor - body
    }
};
*/
class Test{
    int a;
    int b;
    public:
    // Test(int i, int j): a(i), b(j)
    // Test(int i, int j): a(i), b(j + 9)
    // Test(int i, int j): a(i), b(6 * j)
    // Test(int i, int j): a(i), b(j + a)
    // Test(int i, int j): b(j), a(i + b)  --->             Here 'a' will create a garbage value 
    //                                         because 'a' is executed first and we don't the value of 'b' at that time
    Test(int i, int j): a(i), b(j){
        cout<<"Constructor executed"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main(){
    Test t(5, 7);
    return 0;
}