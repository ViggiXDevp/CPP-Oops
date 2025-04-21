#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with vout stream
    ofstream vout("sample60.txt");

    // creating a name string and filling it with the string entered by the user
    cout<<"Enter your name"<<endl;
    string name;
    cin>>name;

    // writing a string to the file
    vout<<"Hi, my name is " + name;
    vout.close();

    ifstream vin("sample60.txt");
    string content;
    //vin>>content;
    getline(vin, content);
    cout<<"The content of this file is: "<<endl<<content;
    vin.close();

    return 0;
}