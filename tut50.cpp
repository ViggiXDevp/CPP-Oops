#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 7;
    int * b = &a;
    cout<<"The value at address b is "<<*b<<endl;

    // new keyword
    int * x = new int(78);
    float * y = new float(69.99);
    cout<<"The value at address x is "<<*x<<endl;
    cout<<"The value at address y is "<<*y<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    return 0;
}