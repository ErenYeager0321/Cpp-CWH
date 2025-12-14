#include<iostream>
using namespace std;
 
int c = 40;

int main(){
    int c = 5;
    int &h= c; //Here d is referencing c soits reference variable
    cout<<"\n"<<c;
    cout<<h<<endl;  

    float x = 455;
    float &y = x; //reference variable y is another name for x
    cout<<x<<endl;
    cout<<y<<endl;
    //Neeche covert int to float or float to int ka code hai

    // *****Built-in data types in c++******
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c;// to access global variable we use scope resolution operator ::  
    cout<<"\n";
    // float d = 34.4;
    // long double e = 34.4;
    // if we ask the compiler which is float or double he will say its double but if we write like that 34.4f than he will recognise and we can aslo write 34.4l(long double)
   
    //***** literals****** 
    float d = 34.4F;
    long double e = 34.4L;
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;// yaha pr bit size ki baat hori hai
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    cout<<"\n";
    // *****reference variables******

    // *****typecasting******
    int a = 45;
    float b = 45.46;

    cout<<"the value of a is "<<(float)a<<endl;//converting int to float
    cout<<"the value of a is "<<float(a)<<endl;//both are same

    cout<<"the value of b is "<<(int)b<<endl;//converts float to int
    cout<<"the value of b is "<<int(b)<<endl;//both are same can write only ine too

    cout<<"The expression is "<<a+b<<endl;// int + float = float
    cout<<"The expression is "<<a+(int)b<<endl;// float ko int me badal diya isliye 45 value lega
    cout<<"The expression is "<<a+int(b)<<endl;
    return 0; 
}
/*
Output

55
455
455
The global c is 40
the size of 34.4 is 8
the size of 34.4f is 4
the size of 34.4F is 4
the size of 34.4l is 12
the size of 34.4L is 12
The value of d is 34.4
The value of e is 34.4

the value of a is 45
the value of a is 45
the value of b is 45
the value of b is 45
The expression is 90.46
The expression is 90
The expression is 90
*/
