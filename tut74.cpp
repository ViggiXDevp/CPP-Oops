#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (Functor): Function wrapped in a class so that it is available as an object
    int arr[] = {45, 5, 68, 874, 69, 124};
    // sort(address of first element, address of last element);
    sort(arr, arr+6);  // ASCENDING Order
    sort(arr, arr+6, greater<int>());   // DESCENDING Order
    for (int i = 0; i < 6; i++)
    {
         cout<<arr[i]<<" ";
    }
    
    return 0;
}