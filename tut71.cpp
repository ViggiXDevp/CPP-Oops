#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"Displaying the vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}
int main(){
    // Ways to create a vector
    vector<int> vec1;  // zero length integer vector

    // int element, size;
    // cout<<"Enter the size of your vector: "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // vec1.pop_back();

    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();   --or--    auto iter = vector.begin()
    // vec1.insert(iter+1 ,2 , 69);
    // display(vec1);

    vector<char> vec2(4);    // 4-element character vector
    // vec2.push_back('9');
    // display(vec2);
    vector<char> vec3(vec2);    // 4-element character vector from vec2
    // display(vec3);
    vector<int> vec4(7, 9);
    display(vec4);
    cout<<vec4.size();

    return 0;
}