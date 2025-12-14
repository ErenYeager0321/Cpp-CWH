#include<iostream>
using namespace std;

int glo = 20; 

int main() {
    // int glo=10;//global variable its value can be used anywhere in the program and its always written outside the main function
    // int a=20;
    // int b=20;
    int a=20, b=30;//integer type variable
    float pi=3.14;//use for decimal values
    char c='u';//use for single characters
    bool d=true;//displays 1 for true and 0 for false
    // cout<<"The value of glo is "<<glo;
    cout<<"\n"<<glo;
    // cout<<" The value of a "<<a<<"\n The value of b "<<b;
    cout<<"\n"<<a<<"\n"<<b;
    // cout<<" \n The value of pi "<<pi;
    cout<<"\n"<<pi;
    // cout<<" \n The value char "<<c;
    cout<<"\n"<<c;
    // cout<<" \n The value of bool "<<d;
    cout<<"\n"<<d;
    return 0;
}
/*Output
20
20
30
3.14
u
1
*/