#include<iostream>
using namespace std;
/*
student --> test
student --> sports
test --> result
sports --> result

*/
class Student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};
class Test : virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float a, float b){
        maths = a;
        physics = b;
    }
    void get_marks(void){
        cout<< "Your result is here: "<<endl<<"Maths: "<<maths<<endl<<"Physics: "<<physics<<endl;
    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void get_score(void){
        cout<<"The sports score is "<<score<<endl;
    }
};
class Result:public Test, public Sports{
    private:
    float total;
    public:
    void display(){ 
        print_number();
        get_marks(); 
        get_score();
        total = maths + physics + score;
        cout<<"The total score is: "<<total<<endl;
    }

};
int main(){
    Result R;
    R.set_number(420);
    R.set_marks(99, 76);
    R.set_score(95);
    R.display();
    return 0;
}