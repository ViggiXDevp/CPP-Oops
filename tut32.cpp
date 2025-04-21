#include<iostream>
using namespace std;
//int a, b;
class simple{
    int data1;
    int data2;
    int data3;
    public:
    simple(int a, int b=7, int c=4){
         data1 = a;
         data2 = b;
         data3 = c;
         //a = data1;   // In correct
         //b = data2;
    }
    void printData();
};
void simple :: printData(){
    cout<<"The value of data is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}
int main(){
    simple s1(9, 1);
    s1.printData();
    return 0;
}