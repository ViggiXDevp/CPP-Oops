#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++)
    {
         
        if(i == 3){
            break;
        }
        cout<<i<<endl;
    }

cout<<endl;
cout<<endl;

    for (int i = 0; i < 5; i++)
    {
        if(i ==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}