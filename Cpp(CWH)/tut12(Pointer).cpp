#include<iostream>
using namespace std;

int main(){
    // Pointer in C++ which holds the addres of otherdata
    int a =3;
    int*b = &a; // b is pointer which holds the address of a   
    cout<<"The addres of a is "<<&a<<endl;
    cout<<"The addres of a is "<<b<<endl;// both will print same thing addres of a
    cout<<"\n";
    cout<<"The value at address b is "<<*b<<endl; // dereferencing operator(*) jo address pe jake value dikhayega a ki
    cout<<"\n";

    int**c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;// both will print same thing addres of b
    
    cout<<"\n";

    cout<<"The value at address c is "<<*c<<endl; // ye b ka address dikhayega
    cout<<"The value at address of addres c is "<<**c<<endl;//ye b ki vakue
    
    return 0;
}      