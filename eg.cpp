#include<iostream>
using namespace std;
class college{
    private:
    int get(){
        cout<<mark;
        cout<<"\nenter your mark: ";
        cin>>mark;
    }
    int mark;
    public:
    void disp();
    college(int val){
        mark = val;
    }
};
void college::disp(){
        get();
        cout<<mark;
    }
int main(){
    college stu1(149);
    stu1.disp();
    return 0;
}