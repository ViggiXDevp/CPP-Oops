#include<iostream>
using namespace std;

//Function Prototype
// type function-name (arguments);

//int sum (int a, int b); //---> Acceptable
//int sum (int a, b);  //--->Not Accetable
int sum (int, int); //---> Acceptable
void g(void);
// void g(); //---> Acceptable

int main(){
    int num1, num2;
    cout<<"Enter your first number"<<endl;
    cin>>num1;
    cout<<"Enter your second number"<<endl;
    cin>>num2;
    // num1 and num2 are ACTUAL PARAMETERS
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}
int sum(int a, int b){
    // FORMAL PARAMETERS a and b will be taking value from the actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g(){
    cout<<"\nHello, Good morning";
}