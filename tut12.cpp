#include<iostream>
using namespace std;

int main(){
    //Pointer is a datatype which holds the address of the other datatypes.
    int a = 3;
    int * b = &a;
    // & ---> (Adress of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // * ---> (Value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to Pointer
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}