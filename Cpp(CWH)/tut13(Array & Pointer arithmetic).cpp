#include<iostream>
using namespace std;

int main(){
    //Array Example - Continous block of elements
    //can use any data type int, float , char , double by adding [] to them etc
    // int float[4]= {2,4,6,8};
    // int char[4]= {'d','e','v','e'};
    // int double nums[4]= {2.5,4.5,6.5,8.5};
    // cout<<float[0]<<endl;
    // cout<<char[0]<<endl;
    // cout<<double nums[0]<<endl;
    int marks[4] = {4,3,6,9};
    int mathmarks[4] = {32,33,31,36};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"\n";
    //Changing the value of array
    mathmarks[0] = 22;//array me bghale hi koi bhi value ho idhar pe aise value de kr change kr skte hai to yahi value show kregi na ki purani
    mathmarks[1] = 25;
    mathmarks[2] = 23;
    mathmarks[3] = 24;
    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<"\n";
    //Using for loop to print array
    cout<<"Printing marks using for loop"<<endl;
    for(int i=0; i<4; i++){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;// 'i' will only show the no. of array/block not the value 'marks[i]' will show the value
        // cout<<"\n";
        // cout<<marks[i]<<endl;//will show only the value of array both aare same
    }
    cout<<"\n";
    //Using do-while loop to print array
    int m[4]={10,20,30,40};
    // cout<<m[0]<<endl;
    // cout<<m[1]<<endl;
    // cout<<m[2]<<endl;
    int i=0;
    do{
        cout<<"The value of m "<<i<<" is "<<m[i]<<endl;
        i++;
    }
    // while(i<2);//sirf 2 block(0,1) array ko print krega na ki 3 ko jitni value denge utni values print hogi 
    while(i<=2); // i<=2 likha to m[0,1,2] print hoga
    cout<<"\n";

    //Pointers and arrays
    int* p = m; // yaha p pointer hai jo m array ka address hold kr raha hai
    cout<<*(p++)<<endl; // ye m[0] ki value dikhayega aur p ko aage badha dega
    cout<<*p<<endl; // ye m[1] ki value dikhayega
    cout<<*(++p)<<endl; // ye m[2] ki value dikhayega
    cout<<"\n";
    
    cout<<"The value of m[0] is "<<*p<<endl; // dereferencing operator(*) jo address pe jake value dikhayega m ki
    cout<<"The value of m[1] is "<<*(p+1)<<endl;
    cout<<"The value of m[2] is "<<*(p+2)<<endl;
    return 0;
}

/*
Output
4
3
6
9

These are math marks
22
25
23
24

Printing marks using for loop
The value of marks 0 is 4
4
The value of marks 1 is 3
3
The value of marks 2 is 6
6
The value of marks 3 is 9
9

The value of m 0 is 10
The value of m 1 is 20
The value of m 2 is 30

10
20
30

The value of m[0] is 30
The value of m[1] is 40
The value of m[2] is 22
*/