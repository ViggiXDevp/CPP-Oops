#include<iostream>
using namespace std;
typedef struct employee     //typedef is used to use a shortcut for 'struct employee'
{
    int eId;
    char favchar;
    float salary;
}vr;


typedef union money     
{
    int rice;
    char car;
    float dollars;
}my;



int main(){
    vr vighnesh;
    vighnesh.eId = 876;
    vighnesh.favchar = 'v';
    vighnesh.salary = 100000000000;


    // cout<<"The value is: "<<vighnesh.eId<<endl;
    // cout<<"The value is: "<<vighnesh.favchar<<endl;
    // cout<<"The value is: "<<vighnesh.salary<<endl;

    my arjun;
    arjun.rice = 5;
    // arjun.car = 'B';                  //In unions you can use any one value at a time. Otherwise, you'll get a garbage value!!
    // arjun.dollars = 999999999;

    cout<<arjun.rice<<endl;

    enum meal{breakfast, lunch, snacks, dinner};
    meal m = snacks;
    cout<<m<<endl;
    cout<<(m == 3)<<endl; //In this case it will either print 1 or 0 [Trure or False]

    cout<<breakfast;
    cout<<lunch;
    cout<<snacks;
    cout<<dinner;



    return 0;
}