#include<iostream>
using namespace std;
// float funAvg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }


// float funAvg2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}


template<class T1, class T2>
float funAvg(T1 a, T2 b){
float avg = (a+b)/2.0;
return avg;
}
int main(){
    float a;
    a = funAvg(5.4658987, 2.9866);
    cout<<"The average of these numbers is: "<<a<<endl;

    int x = 8;
    int y = 9;
    swapp(x, y);
    cout<<x<<endl<<y;
    return 0;
}