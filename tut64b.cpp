#include<iostream>
using namespace std;

template <class T>
class calculator{
    protected:
    T a;
    T b;
    public:
    calculator(){}
    calculator(T x, T y){
        a = x;
        b = y;
    }
    T sum(){
        cout<<a+b<<endl;
    }
    T difference(){
         cout<<a-b<<endl;
    }
    T multiplication(){
        cout<<a*b<<endl;
    }
    T division(){
        cout<<a/b<<endl;
    }
};
int main(){
    calculator <int> obj1(3, 6);
    obj1.difference();
    obj1.division();
    obj1.multiplication();
    obj1.sum();
    calculator <float> obj2(6.95468, 45.2658);
    obj2.difference();
    obj2.division();
    obj2.multiplication();
    obj2.sum();
    return 0;
}