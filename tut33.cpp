#include<iostream>
using namespace std;
class Bankdeposit{
    int principle;
    int years;
    float interest;
    float returnvalue;
    public:
        Bankdeposit(){}
        Bankdeposit(int p, int y, float r);
        Bankdeposit(int p, int y, int R);
        void show();
};
Bankdeposit::Bankdeposit(int p, int y, float r){
    principle = p;
    years = y;
    interest = r;
    returnvalue = principle;
    for ( int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+r);
    }
    
}
Bankdeposit::Bankdeposit(int p, int y, int R){
    principle = p;
    years = y;
    interest = float(R)/100;
    returnvalue = principle;
    for ( int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interest);
    }
    
}
void Bankdeposit::show(){
    cout<<endl<<"Principle amount was Rs."<<principle
    <<" and return value after "<<years<<" years is Rs."<<returnvalue<<endl;
}
int main(){
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of Principle amount, years, and interest "<<endl;
    cin>>p>>y>>r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();


    cout<<"Enter the value of Principle amount, years, and interest(in percentage) "<<endl;
    cin>>p>>y>>R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    bd3.show();
    return 0;
}