#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
// This will not swap a and b
void swap(int a, int b){        // Temp   a   b
    int temp = a;               //  4     4   5
    a = b;                      //  4     5   5
    b  = temp;                  //  4     5   4
}

// Call by Reference using Pointers
void swapPointer(int *a, int *b){        // Temp   a   b
    int temp = *a;                       //  4     4   5
    *a = *b;                             //  4     5   5
    *b  = temp;                          //  4     5   4
}
// Call by Reference using C++ reference variables
void swapReferenceVar(int &a, int &b){        // Temp   a   b
    int temp = a;                       //  4     4   5
    a = b;                             //  4     5   5
    b  = temp;                          //  4     5   4
}
int main(){
    int a = 4; int b = 5;
    cout<<"The value of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    //swap(a, b); //This will not swap a and b
    //swapPointer(&a, &b); //This will swap a and b using pointers reference
    swapReferenceVar(a, b);  //This will swap a and b using reference variables
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}