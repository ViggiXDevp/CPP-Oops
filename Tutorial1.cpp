// #include<iostream>
// using namespace std;

// int greatest(int a, int b){
//     if (a>b){
//         return a;
//     }else{
//         return b;
//     }
    
// }

// int main(){
//             int a = 10; int b = 20;
//             int result = greatest(a, b);
//             cout<<result; 
//             return 0;
// }

///////////////////////////////////////////////////

// #include<iostream>
// using namespace std;
// void greatest(int a, int b){
//     if (a>b){
//          cout<<a;
//      }else{
//          cout<<b;
//      }
// }
// int main(){
//     int a = 9; int b = 5;
//     greatest(a, b);
//     return 0;
// }

//////////////////////////////////////////////


// #include <iostream>
// using namespace std;

// int greatest() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     if (a>b){
//          return a;
//      }else{
//          return b;
//      }
// }

// int main() {
//     int result = greatest();
//     cout<<result;
//     return 0;
// }

////////////////////////////////////////////////

#include<iostream>
using namespace std;
void greatest(){
    int a; int b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if (a>b){
          cout<<a;
      }else{
          cout<<b;
      }

}
int main(){
    greatest();
    return 0;
}
