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


class AcademicRecord {
public:
    int marks1, marks2, marks3;

    void setMarks(int m1, int m2, int m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    int getTotalMarks() {
        return marks1 + marks2 + marks3;
    }

    void displayMarks() {
        cout << "Marks - Subject 1: " << marks1 << ", Subject 2: " << marks2 << ", Subject 3: " << marks3 << endl;
    }
};

// Derived Class for Multiple Inheritance:  
class Result : public Person, public AcademicRecord {
public:
    void displayResult() {
        int total = getTotalMarks();
        double percentage = total / 3.0;
        displayPersonInfo();
        displayMarks();
        cout << "Total Marks: " << total << ", Percentage: " << percentage << "%" << endl;
    }
};

// Derived Class for Hierarchical Inheritance:  
class SportsResult : public AcademicRecord {
private:
    int sportsMarks;

public:
    void setSportsMarks(int sm) {
        sportsMarks = sm;
    }

    void displaySportsResult() {
        int academicTotal = getTotalMarks();
        int total = academicTotal + sportsMarks;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total with Sports: " << total << endl;
    }
};

int main() {
    // Multiple Inheritance
    Result studentResult;
    studentResult.setPersonInfo("Vighnesh", 18);
    studentResult.setMarks(98, 93, 96);
    cout << "Academic Result Analysis:" << endl;
    studentResult.displayResult();

    // Hierarchical Inheritance 
    SportsResult sportsResult;
    sportsResult.setMarks(98, 93, 96);
    sportsResult.setSportsMarks(80);
    cout << "\nSports Result Analysis:" << endl;
    sportsResult.displaySportsResult();

    return 0;
}
