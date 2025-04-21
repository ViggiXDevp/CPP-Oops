#include<iostream>
using namespace std;

int main(){
    int a = 4; int b = 8;
    cout<<"Operators in C++"<<endl;
    //arithmetic operators
    cout<<"following are the arithmetic operators"<<endl;
    cout<<"a + b: "<<a + b<<endl;
    cout<<"a - b: "<<a - b<<endl; 
    cout<<"a * b: "<<a * b<<endl;
    cout<<"a / b: "<<a / b<<endl;
    cout<<"a % b: "<<a % b<<endl;
    cout<<"a++: "<<a++<<endl;
    cout<<"a--: "<<a--<<endl;
    cout<<"++a: "<<++a<<endl;
    cout<<"--a: "<<--a<<endl;
    cout<<endl;
    cout<<endl;

    //comparison operators
    cout<<"following are the comparison operators"<<endl;
    cout<<"a == b: "<<(a==b)<<endl;
    cout<<"a != b: "<<(a!=b)<<endl;
    cout<<"a >= b: "<<(a>=b)<<endl;
    cout<<"a <= b: "<<(a<=b)<<endl;
    cout<<"a > b: "<<(a<b)<<endl;
    cout<<"a < b: "<<(a>b)<<endl;
    cout<<endl;
    cout<<endl;

    //logical operators
    cout<<"following are the logical operators"<<endl;
    cout<<"logical and operator: "<<((a==b) && (a<b))<<endl;
    cout<<"logical or operator: "<<((a==b) || (a<b))<<endl;
    cout<<"logical not operator: "<<(!(a==b))<<endl;


    //Bitwise operators
    cout<<"following are the bitwise operators"<<endl;
    cout<<"Bitwise and operator: "<<(a & b)<<endl;
    cout<<"Bitwise or operator: "<<(a | b)<<endl;
    cout<<"Bitwise ex-or operator: "<<(a ^ b)<<endl;
    return 0;
}