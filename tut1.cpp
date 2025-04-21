#include<iostream>
using namespace std;

int main(){
    int marks [] = {45, 26, 36, 98};
    int i = 0;
    while (i<4){
       cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
       i++;



    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *p+1 is "<<*(p+1)<<endl;
    cout<<"The value of *p+2 is "<<*(p+2)<<endl;
    cout<<"The value of *p+3 is "<<*(p+3)<<endl;

    }
    return 0;
}
