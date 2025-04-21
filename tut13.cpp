#include<iostream>
using namespace std;

int main(){
    int marks[] = {23, 69, 45, 99};
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathmarks[4];
    mathmarks[0] = 45;
    mathmarks[1] = 56;
    mathmarks[2] = 69;
    mathmarks[3] = 78;

    //You can change marks of a array after aassigned.
    mathmarks[2] = 100;

    cout<<"The are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    cout<<endl;
    cout<<endl;


    for(int i = 0; i < 4; i++){
        cout<<"The value of math marks "<<i<<" is "<<mathmarks[i]<<endl;
    }

    cout<<endl;
    cout<<endl;

    int i = 0;
    while (i<4)
    {
        cout<<"The value of math marks "<<i<<" is "<<mathmarks[i]<<endl;
        i++;
    }

    cout<<endl;
    cout<<endl;

    int a = 0;
    do
    {
        cout<<"The value of math marks "<<a<<" is "<<mathmarks[a]<<endl;
        a++;
    } while (a<4);

    cout<<endl;
    cout<<endl;

    //Pointers in Array

    //Pointer arithmetic ---> address(new) = address(old) + (i * size of datatype)
    
    int *p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;      // () ----> is very important
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    

    return 0;
}