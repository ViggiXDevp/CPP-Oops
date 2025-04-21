#include <iostream>
using namespace std;


class Person {
private:
    string name;
    int age;

public:
    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Single Inheritance

class Student : public Person {
private:
    int marks1, marks2, marks3;

public:
    void setMarks(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    void displayMarks() {
        cout << "Marks - Subject 1: " << marks1 << ", Subject 2: " << marks2 << ", Subject 3: " << marks3 << endl;
    }

    int getTotalMarks() {
        return marks1 + marks2 + marks3;
    }
};

// Multi-level Inheritance

class Result : public Student {
public:
    void displayResult() {
        int total = getTotalMarks();
        float percentage = total / 3.0;

        displayPersonInfo();
        displayMarks();
        cout << "Total Marks: " << total << ", Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;

    // Set student information and marks
    student.setPersonInfo("Vighnesh", 18);
    student.setMarks(95, 90, 97);

    // Display result analysis
    cout << "Result Analysis:" << endl;
    student.displayResult();

    return 0;
}
