#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Ela unnav?"<<endl;
    }
};
class derived: public Base1, public Base2{
    public:
    void greet(){
        Base1::greet();
    }
};
class B{
    public:
    void say(){
        cout<<"Hello World"<<endl;
    }
};
class D:public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
    void say(){
        cout<<"Hello Earth"<<endl;
    }
};
int main(){
    // Ambiguity 1
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    derived d1;
    d1.greet();

    // Ambiguity 2
    B b;
    D d;
    b.say();   // Here ambiguity will be resolved by itself by overriding
    d.say();
    return 0;
}