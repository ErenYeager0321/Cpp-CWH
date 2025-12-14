#include<iostream>
using namespace std;

int main(){
    int a=10 , b=5;
    cout<<"operators in c++"<<endl;
    cout<<"following are the operators in c++"<<endl;
    cout<<"\n";
    // arithmetic operators
    cout<<"the value of a+b is "<<a+b<<endl ;// addition operator
    cout<<"the value of a-b is "<<a-b<<endl ;// subtraction operator
    cout<<"the value of a*b is "<<a*b<<endl ;// multiplication operator
    cout<<"the value of a/b is "<<a/b<<endl ;// division operator
    cout<<"the value of a%b is "<<a%b<<endl ;// modulus operator
    cout<<"the value of a ++ is "<<a++<<endl ;// post-increment
    cout<<"the value of a -- is "<<a--<<endl ;// post-decrement
    cout<<"the value of --a is "<<--a<<endl ;// pre-decrement
    cout<<"the value of ++a is "<<++a<<endl ;// pre-increment
    cout<<"\n";
      //Assignment operators used to assign values to variables
    // int a=3, b=9;
    // char d='d';
    // float pi=3.14;
    //like this we have many assignment operators
   
    // comparison operators (gives output in 1(true) or 0(false) depends on condition)
    cout<<"The value of a==b is "<<(a==b)<<endl;// equal to operator
    cout<<"The value of a!=b is "<<(a!=b)<<endl;// not'!' equal to operator
    cout<<"The value of a>=b is "<<(a>=b)<<endl;// greater than equal to operator
    cout<<"The value of a<=b is "<<(a<=b)<<endl;// less than equal to operator
    cout<<"The value of a>b is "<<(a>b)<<endl;// greater than operator
    cout<<"The value of a<b is "<<(a<b)<<endl;// less than operator
    cout<<"\n";
    //compariso and logical operator are almost same

    // logical operators
    cout<<"The value of this logical 'AND(&&)'operator is "<<((a==b)&&(a<b))<<endl;// logical AND&& operator
    cout<<"The value of this logical 'OR(||)'operator is "<<((a==b)||(a<b))<<endl;// logical OR|| operator
    cout<<"The value of this logical 'NOT(!)'operator is "<<(!(a==b))<<endl;// logical NOT! operator
   return 0;
}
/*Output
operators in c++
following are the operators in c++

the value of a+b is 15
the value of a-b is 5
the value of a*b is 50
the value of a/b is 2
the value of a%b is 0
the value of a ++ is 10
the value of a -- is 11
the value of --a is 9
the value of ++a is 10

The value of a==b is 0
The value of a!=b is 1
The value of a>=b is 1
The value of a<=b is 0
The value of a>b is 1
The value of a<b is 0

The value of this logical 'AND(&&)'operator is 0
The value of this logical 'OR(||)'operator is 0
The value of this logical 'NOT(!)'operator is 1
*/