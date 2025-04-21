#include<iostream>
using namespace std;
class college{
    public:
    int mark;
    int get(){
        cout<<"enter your mark: ";
        cin>>mark;

    }
    int disp(){
        cout<<mark;
    }
};
int main(){
    college student;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int x = 0;x<n;x++){
        student.get();
    
    }
    for(int x = 0;x<n;x++){
        student.disp();
    }
    return 0;
}