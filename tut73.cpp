#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array
int main(){
    map <string, int> marksMap;
    marksMap["vighnesh"] = 99;
    marksMap["shiva"] = 74;
    marksMap["rohan"] = 86;
    marksMap["arjun"] = 45;

    marksMap.insert({{"arun", 78}, {"kiran", 54}});
    map <string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr != marksMap.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }

    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The maximum size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}