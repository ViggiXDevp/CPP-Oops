#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own constructor
    Number(Number &obj){
        cout<<"Copy constructor called..!"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main(){
    Number x, y, z(69), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z);     // Copy constructor invoked
    z1.display();

    z2 = z;           // Copy constructor is not invoked
    z2.display();
    
    Number z3 = z;    // Copy constructor invoked
    z3.display();
    return 0;
}