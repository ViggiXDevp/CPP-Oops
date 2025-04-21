#include<iostream>
using namespace std;

int sum(float a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

//volume of a cylinder
double volume(double r, int h){
    return 3.14 * r * r * h;
}

//volume of a cube
int volume(int a){
    return a * a * a;
}
int main(){
    cout<<"The sum of 3 and 6 is: "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 5 and 6 is: "<<sum(3, 5, 6)<<endl;
    cout<<"The voulme of a cube of side 3 is: "<<volume(3)<<endl;
    cout<<"The volume of a cylinder of radius 9 and height 6 is: "<<volume(9, 6)<<endl;

    
    return 0;
}