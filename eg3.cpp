#include<iostream>
using namespace std;
class parent{
    public:
    int display{
        
    };

};
class child1:public parent{
    public:
    int show();
};
class child2:public parent{

};
class gchild:public child1, child2{

};
int main(){
    gchild a;
    a.show();
    //a.display();  --> Ambiguous(hybrid inheritance)
    return 0;
}