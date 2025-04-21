 #include <iostream>
using namespace std;

class constructor {
private:
    int val;

public:
    // 1. Default Constructor
    constructor() {
        val = 0; // Initialize val to 0
        cout<<"Default constructor is called and value is set to: "<<val<<endl;
    }

    // 2. Parametrized Constructor
    constructor(int a) {
        val = a; // Initialize val with the passed argument
        cout<<"Parametrized constructor is called and value is set to: "<<val<<endl;
    }

    // 3. Copy Constructor
    constructor(const constructor & obj) {
        val = obj.val; // Copy val from the passed object
        cout<<"Copy constructor is called and value is set to: "<<val<<endl;
    }

    // Function to display the val
    void display() {
        cout<<"The final value is: "<<val<<endl;
    }
};

int main() {
    // 1. Default Constructor
    constructor obj1; // Calls Default Constructor
    obj1.display();

    // 2. Parametrized Constructor
    constructor obj2(10); // Calls Parametrized Constructor with val 10
    obj2.display();

    // 3. Copy Constructor
    constructor obj3 = obj2; // Calls Copy Constructor using obj2
    obj3.display();

    return 0;
}
