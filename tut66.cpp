#include<iostream>
using namespace std;
template<class T1 = int, class T2 = float, class T3 = char>
class vighnesh{
    public:
    T1 a;
    T2 b;
    T3 c;
    vighnesh(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
    }
};
int main(){
    vighnesh<> h(9, 8.987, 'c');
    h.display();
    cout<<endl;
    vighnesh<int, char, double> g(5, 'y', 7.345687);
    g.display();
    return 0;
}