#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 3;
    char c= 'd';
    cout<<"The value of a was "<<a;
    a = 44;
    // c = 'e';value change karna character ke liye bhi work krega
    cout<<"\nThe value of a is "<<a;
    // Constants in c++
    const int b = 3;//isse a ki value change ni hogi
    cout<<"The value of b was "<<b<<endl;
    // a = 45; will throw an error bcz a is an constant
    cout<<"The value of b is "<<b<<endl;

    // Manipulators in C++ (use include<iomanip> header file)
    int x = 3, y = 45, z = 5678; // renamed to avoid conflicts with earlier variables
    cout<<"The value of x without setw is "<<x<<endl;
    cout<<"The value of y without setw is "<<y<<endl;
    cout<<"The value of z without setw is "<<z<<endl;

    cout<<"The value of x with setw is "<<setw(4)<<x<<endl; // gives field width of 4
    cout<<"The value of y with setw is "<<setw(4)<<y<<endl; 
    cout<<"The value of z with setw is "<<setw(4)<<z<<endl;

    // Operator precedence in C++
    // int a = 3, b = 4;
    // int c = ((((a*b)+3)+4)+5);
    // cout<<"the value of c is "<<c<<endl;
    return 0;
}

/*
Output
The value of a was 3
The value of a is 44The value of b was 3
The value of b is 3
The value of x without setw is 3
The value of y without setw is 45
The value of z without setw is 5678
The value of x with setw is    3
The value of y with setw is   45
The value of z with setw is 5678
*/