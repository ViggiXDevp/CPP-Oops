#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float biology;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    biology = m2;
}
void Exam::get_marks(void)
{
    cout << "The maths marks are " << maths << endl;
    cout << "The biology marks are " << biology << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_marks(void)
    {
        get_roll_number();
        get_marks();
        float percentage = (maths + biology) / 2;
        cout << "Your percentage is " <<percentage<< "%" << endl;
    }
};
int main()
{
    /*
        If we are inheriting B from A and C from B: [ A--->B--->C ]
        1. A is base class for B and B is base class for C
        2. A--->B--->C  is called Inheritance Path
    */
    Result vighnesh;
    vighnesh.set_roll_number(69);
    vighnesh.set_marks(98, 96);
    vighnesh.display_marks();
    return 0;
}