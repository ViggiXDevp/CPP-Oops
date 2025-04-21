#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for ( it = lst.begin(); it != lst.end(); it++)
    {
        cout<< *it<<" ";
    }
    cout<<endl;
}
int main(){
    // 6 8 9
    list<int> list1; // List of 0 Length
    list1.push_back(8);
    list1.push_back(5);
    list1.push_back(54);
    list1.push_back(54);
    list1.push_back(32);
    list1.push_back(7);
    list1.push_back(36);
    
    display(list1);
    // Removing elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(54);  // If the given element is not present in the list, then it won't affect anything
    // display(list1);

    // Sorting the list
    // list1.sort();
    // display(list1);
    
    // Reversing the list
    list1.reverse();
    display(list1);

    list<int> list2(8); // Empty list of size 8
    list<int> :: iterator iter = list2.begin();
    *iter = 69;
    iter++;
    *iter = 10;
    iter++;
    *iter = 36;
    iter++;
    display(list2);
    
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging: ";
    display(list1);
    
    return 0;
}