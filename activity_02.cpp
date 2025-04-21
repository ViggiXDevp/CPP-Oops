#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void printStack(stack<T> s) {
    cout << "Stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    // 1. Create a Stack
    stack<int> myStack;
    cout << "Stack created.\n";

    // 2. Find the size
    cout << "Size: " << myStack.size() << endl;

    // 3. Insert elements
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    cout << "After pushing 10, 20, 30:\n";
    printStack(myStack);

    // 4. Delete an element
    myStack.pop();
    cout << "After one pop:\n";
    printStack(myStack);

    // 5. Demonstrate begin() and end() using deque
    deque<int> dq = {1, 2, 3, 4};
    stack<int, deque<int>> dqStack(dq);
    cout << "Using deque - Begin: " << *dq.begin() << ", End (last element): " << *(dq.end() - 1) << endl;

    // 6. max_size() 
    cout << "Max size (approx.): " << dq.max_size() << endl;

    // 7. capacity() – Only available in vector, not stack
    vector<int> v = {5, 10, 15};
    cout << "Vector capacity: " << v.capacity() << endl;

    // 8. reverse()
    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // 9. empty()
    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    // 10. at() – vector example
    cout << "Element at index 1 in vector: " << v.at(1) << endl;

    // 11. front() & 12. back()
    cout << "Front of vector: " << v.front() << ", Back: " << v.back() << endl;

    // 13. erase()
    v.erase(v.begin() + 1);
    cout << "After erase at index 1: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // 14. clear()
    v.clear();
    cout << "After clear, is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 15. swap()
    stack<int> s1, s2;
    s1.push(100); s1.push(200);
    s2.push(300); s2.push(400);
    s1.swap(s2);
    cout << "After swapping stacks, s1: ";
    printStack(s1);

    // 16. merge() – Not directly supported; we simulate by transferring elements
    stack<int> s3, s4;
    s3.push(1); s3.push(2);
    s4.push(3); s4.push(4);
    // Merge s4 into s3 (we'll reverse to preserve order)
    stack<int> temp;
    while (!s4.empty()) {
        temp.push(s4.top());
        s4.pop();
    }
    while (!temp.empty()) {
        s3.push(temp.top());
        temp.pop();
    }
    cout << "After merging s4 into s3: ";
    printStack(s3);

    return 0;
}
