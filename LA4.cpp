#include <iostream>
using namespace std;


class Person {
public:
    string name;
    int age;

    void setPersonInfo(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Marks {
protected:
    int subject1, subject2, subject3;

public:
    void setMarks(int m1, int m2, int m3) {
        subject1 = m1;
        subject2 = m2;
        subject3 = m3;
    }

    void displayMarks() {
        cout << "Marks: Subject1 = " << subject1
             << ", Subject2 = " << subject2
             << ", Subject3 = " << subject3 << endl;
    }
};


class Sports : public Person {
protected:
    int sportsMarks;

public:
    void setSportsMarks(int sm) {
        sportsMarks = sm;
    }

    void displaySportsMarks() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

// Hybrid Inheritance
class Result : public Marks, public Sports {
public:
    void displayResult() {
        int totalMarks = subject1 + subject2 + subject3 + sportsMarks;
        double percentage = totalMarks / 4.0;

        displayPersonInfo();
        displayMarks();
        displaySportsMarks();
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;

    // Set student information and marks
    student.setPersonInfo("Vighnesh", 18);
    student.setMarks(95, 94, 96);
    student.setSportsMarks(80);

    // Display the result analysis
    cout << "Student Result Analysis:" << endl;
    student.displayResult();

    return 0;
}
