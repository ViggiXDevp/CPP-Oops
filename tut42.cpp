#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
    int a, b;
    public:
    void setdatasimple(){
        cout<<"Enter your first number "<<endl;
        cin>>a;
        cout<<"Enter your second number "<<endl;
        cin>>b;
    }
    void getdatasimple(){
        cout<<"The sum of two numbers is "<<a + b<<endl;
        cout<<"The difference of two numbers is "<<a - b<<endl;
        cout<<"The product of two numbers is "<<a * b<<endl;
        cout<<"The quotient of two numbers is "<<a / b<<endl;
    }
};
class scientificcalculator{
    int a, b;
    public:
    void setdatascientific(){
        cout<<"Enter your first number "<<endl;
        cin>>a;
        cout<<"Enter your second number "<<endl;
        cin>>b;
    }
    void getdatascientific(){
        cout<<"The value of sin(a + b) is "<<sin(a + b)<<endl;
        cout<<"The value of log(a - b) is "<<log(a - b)<<endl;
        cout<<"The value of exp(a * b) is "<<exp(a * b)<<endl;
        cout<<"The value of tan(a / b) is "<<tan(a / b)<<endl;
    }
};
class hybridcalculator:public simplecalculator, public scientificcalculator{
    public:
    void display(){
        setdatasimple();
        getdatasimple();
        setdatascientific();
        getdatascientific();
    }
};
int main(){
    hybridcalculator cal;
    cal.display();
    return 0;
}