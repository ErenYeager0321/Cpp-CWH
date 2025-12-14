#include<iostream>
using namespace std;

class practice{
    private:
    int a , b;
    public:
    int c,d;
    void dena(int a1, int b1){//class ke bahar function bana kr bhi value de skte hai jaise sbe pehle kiy tha scope resokution ka use krke
        a = a1;
        b = b1;
    }
    void lena(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
    }
};

// void practice :: dena(int a1,int b1){
//     a=a1;
//     b=b1;
// }

int main(){
    practice p;
    p.c = 3;
    p.d = 4;
    p.dena(1,2);
    p.lena();
    return 0;
}