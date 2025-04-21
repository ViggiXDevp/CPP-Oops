#include<iostream>
using namespace std;

/*
Class templates with multiple parameters..!

template<class T1, class T2>
class nameOfClass{
    //body
}
*/

template <class T1, class T2>
class number{
    public:
    T1 data1;
    T2 data2;
    number(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main(){
    number <char, float> obj('b', 9.87);
    obj.display();
    return 0;
}