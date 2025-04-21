#include<iostream>
using namespace std;
class Baseclass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
    }
};
class Derivedclass : public Baseclass{
    public:
    int var_derived;;
    void display(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
        cout<<"Displaying derived class variable derived_base "<<var_derived<<endl;
    }
};
int main(){
    Baseclass * base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;  // Pointing base class pointer to derived class

    base_class_pointer->var_base = 69;
    // base_class_pointer->var_derived = 69;  // will throw an error because, Baseclass has no member called var_derived
    base_class_pointer->display();

    base_class_pointer->var_base = 6956425;
    base_class_pointer->display();

    Derivedclass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 56;   /*The main thing to note here is that this will not throw an error because
                                            we can set the value of base class data member by using derived class pointer 
                                            but we cannot set the value of derived class data member by using base class pointer*/
    derived_class_pointer->var_derived = 9876;
    derived_class_pointer->display();
    return 0;
}