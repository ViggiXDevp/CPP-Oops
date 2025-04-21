#include <iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "Enter the iD: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The iD of the Employee is: " << id << " and this is Employee number " << count << endl;
    }
    static void getCount(void)
    {
         // Static functions can access other static functions or static members
         // cout<<id;   --> This shows an error because, it is not a static member
        cout << "The value of count is " << count << endl;
    }
};
int Employee::count = 100; // Default value is 0  // If you want to change the initial count, you can't change in class
int main()
{
    Employee Vighnesh, arjun, varun;
    // Count is the static data member of the class Employee
    // Vighnesh.id = 1;      // Can't do this because it is a private member
    // Vighnesh.count = 23;  // Can't do this because it is a private member

    Vighnesh.setData();
    Vighnesh.getData();
    Vighnesh.getCount();

    arjun.setData();
    arjun.getData();
    Employee::getCount();          // You can either use (Employee::getcount();) or (object.getcount();)

    varun.setData();               
    varun.getData();
    Employee::getCount();
    return 0;
}