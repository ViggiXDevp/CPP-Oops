#include<iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void setdata(int a, int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    //Complex *ptr = new Complex;       // ---> Can use this also to create object...
    Complex c1;
    Complex *ptr = &c1;
    // (*ptr).setdata(6, 9); --- is same as   
    ptr->setdata(6, 9);

    // (*ptr).getdata();  --- is same as        // () is important because of precedence
    ptr->getdata();


    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setdata(1, 4); 
    ptr1->getdata();
    return 0;
}