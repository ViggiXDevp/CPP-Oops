#include<iostream>
using namespace std;

template <class T>
class vighnesh{
    public:
    T data;
    vighnesh(T a){
        data = a;
    }
    void display();
};
template <class T>
void vighnesh<T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"This is func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"This is templatised func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"This is templatised func1() "<<a<<endl;
}


int main(){
    vighnesh<double> h(8.7646126546);
    h.data;
    cout<<h.data<<endl;
    h.display();

    func(5);     // Exact match takes the highest priority
    func('f');   // Here, templatised func() is called becaused there is no exact match
    func1(767);  // Here, templatised func() is called becaused there is no exact match
    return 0;
}