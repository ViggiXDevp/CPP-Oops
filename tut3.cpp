//Struct, Union , Enum!!
#include<iostream>
using namespace std;
typedef struct employee
{
    int id;
    float Salary;
    char favChar;
}ep;

union money
{
    int rice;
    float dollar;
    char favChar;
};


int main(){

    enum Meal{ breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    //union money v1;
    //v1.rice = 69;
    //v1.dollar = 48;
    //v1.favChar = 'h';
    //cout<<v1.favChar<<endl;


    //ep vighnesh;
    //vighnesh.id = 25;
    //vighnesh.Salary = 96000000000;
    //vighnesh.favChar = 'v';
    //cout<<vighnesh.id<<endl;
    //cout<<vighnesh.Salary<<endl;
    //cout<<vighnesh.favChar<<endl;
    return 0;
}