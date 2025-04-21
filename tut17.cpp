#include<iostream>
using namespace std;

inline int product(int a, int b){
    // Not recommended to use static with inline
    //static int c = 0;   // This executes only once
    //c = c + 1;          // Next time the function is run, the value of c is retained
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){  // Default arguments should be placed in the end
    return currentMoney * factor;
}
int main(){
    int a, b;
    //cout<<"Enter the value of a and b: "<<endl;
    //cin>>a>>b;
    //cout<<"The product of a and b is: "<<product(a, b)<<endl;
    
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in the bank account, you'll receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in the bank account, you'll receive "<<moneyReceived(money, 1.10)<<" Rs after 1 year"<<endl;
    return 0;
}  