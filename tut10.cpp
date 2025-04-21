#include<iostream>
using namespace std;

int main(){
    //for loop//
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;

    //while loop//
    int x = 1;
    while (x <= 9)
    {
        cout<<x<<endl;
        x++;
    }
    cout<<endl;
    cout<<endl;

    //do-while loop//
    int a = 1;
    do
    {
        cout<<a<<endl;
        a++;    
    } while (a <= 10);


    cout<<endl;
    cout<<endl;


    
    int i = 1;
    do
    {
        cout<<"6 x "<<i<<" = "<<6*i<<endl;
        i++;
    } while (i <= 10);
    
    
    
    return 0;
}