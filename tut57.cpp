#include<iostream>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display(){}
};
class CWHVideo: public CWH{
    int Videolength;
    public:
    CWHVideo(string s, float r, float vl): CWH(s, r){
        Videolength = vl;
    }
    void display(){
        cout<<"The title of this video is "<<title<<endl;
        cout<<"The rating of this video is "<<rating<<" out of 5 stars"<<endl;
        cout<<"The duration of this video is "<<Videolength<<" minutes"<<endl;
    }
};
class CWHText: public CWH{
    int word;
    public:
    CWHText(string s, float r, int wc): CWH(s, r){
        word = wc;
    }
    void display(){
        cout<<"The title of this text is "<<title<<endl;
        cout<<"The rating of this text is "<<rating<<" out of 5 stars"<<endl;
        cout<<"The number of words in this text is "<<word<<" words"<<endl;
    }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // For CWHVideo
    title = "TensorFlow tutorial";
    rating = 4.80;
    vlen = 58;
    CWHVideo tfvideo(title, rating, vlen);
    
    // For CWHText
    title = "TensorFlow text";
    rating = 4.79;
    words = 500;
    CWHText tftext(title, rating, words);

    CWH * cwh[2];
    cwh[0] = &tfvideo;
    cwh[1] = &tftext;

    cwh[0]->display();
    cwh[1]->display();
    return 0;
}

// Rules for virtual functions
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in the base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class