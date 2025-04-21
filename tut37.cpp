#include<iostream>
using namespace std;
// base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpid){
        id = inpid;
        salary = 69;
    }
    Employee(){}    
};
// Derived Class syntax
/*
class {{derived class_namr}} : {{visibility-body}} {{base class_name}}{
    members/methods/etc...
}
*/

// Creating a Programmer derived class from Employee base class
class Programmer: public Employee{
    public:
    Programmer(int inpid){
        id = inpid;
    }
    int languagecode = 9;
    int salary = 5;
    void getdata(){
        cout<<id<<endl;
    }
     
};
int main(){
    Employee vighnesh(1), arjun(2);
    cout<<vighnesh.salary<<endl;
    cout<<arjun.salary<<endl;
    cout<<vighnesh.id<<endl;
    cout<<arjun.id<<endl;
    Programmer varun(3);
    cout<<varun.languagecode<<endl;
    cout<<varun.id<<endl;
    varun.getdata();
    cout<<varun.salary<<endl;
    return 0;
}