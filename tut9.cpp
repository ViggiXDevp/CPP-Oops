#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;

    //*********selection control structure--if--else if--else ladder*****


    //if((age < 18) && (age > 0)){
    //    cout<<"You cannot come to my party"<<endl;
    //}
    //else if(age == 18){
    //    cout<<"You will get a kid pass"<<endl;
    //}
    //else if(age < 1){
    //    cout<<"You are not born yet"<<endl;
    //}
    //else{
    //    cout<<"You can come to the party"<<endl;
    //}


    //*****************selection control structure---switch cases */
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 34:
        cout<<"You are 34"<<endl;
        break;                                          //---------break is very important!!!
    case 69:                                            //otherwise it will print all statements
        cout<<"You are 69"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with switch cases";
    return 0;
}