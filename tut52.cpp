#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
    void setdata(int i, float j){
        id = i;
        price = j;
    }
    void getdata(void){
        cout<<"Code of this item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};
                    
                    //   1 2 3
                    //       ^
                    //       |
                    //       |
                    //       ptr
                    //   ptrTemp
                    
int main(){
    int size = 3;
    Shop *ptr = new Shop [size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter the id and price of your item "<<i + 1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p, q);
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptrTemp->getdata();
        ptrTemp++;
    }
     
    
    return 0;
}