//Function and Function Prototypes
#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
//int sum(int,int);
int main(){
    int num1, num2;
    cout<<"Enter your first number"<<endl;
    cin>>num1;
    cout<<"Enter your second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    return 0;
}

