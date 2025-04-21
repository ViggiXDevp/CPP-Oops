#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setiD(void)
    {
        cout << "Enter the iD of the Employee ";
        cin >> id;
    }

    void getiD(void)
    {
        cout << "The iD of the Employee is " << id << endl;
    }
};
int main()
{
    // Employee vighnesh, arjun, rohan;
    // vighnesh.setiD();
    // vighnesh.getiD();     .. // In this way it will be difficult if there are more numbers, so we use array

    Employee meta[3];
    for (int i = 0; i < 3; i++)
    {
        meta[i].setiD();
        meta[i].getiD();
    }

    return 0;
}