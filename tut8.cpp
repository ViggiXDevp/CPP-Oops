#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //int a= 8;
    //cout<<"The value of a was: "<<a<<endl;
    //a = 8;
    //cout<<"The value of a is: "<<a<<endl;

    //const int a= 8;
    //cout<<"The value of a was: "<<a<<endl;
    //a = 8;
    //cout<<"The value of a is: "<<a<<endl;


    //*************Manipulators*********
    //int a= 8,b = 98, c = 9876;
    //cout<<"The value of a is: "<<a<<endl;
    //cout<<"The value of b is: "<<b<<endl;
    //cout<<"The value of c is: "<<c<<endl;

    //cout<<"The value of a is: "<<setw(4)<<a<<endl;
    //cout<<"The value of b is: "<<setw(4)<<b<<endl;
    //cout<<"The value of c is: "<<setw(4)<<c<<endl;

    //**************Operator precedence*************

    int a = 9, b = 7;
    int c = (((a*8)+98)-b);  // multiplicatio ,division,remainder,addition,subtraction//
    cout<<c;                 //associativity is from right to left
    return 0;
}