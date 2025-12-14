#include<iostream>
#include<string>
using namespace std;

int main(){
    string dev = "Devesh";
    cout<<dev<<endl;
    cout<<"Length of string is "<<dev.length()<<endl;
    cout<<"The string in uppercase is "<<dev.substr(0,1)<<endl;// 0 se start hoke 3 character le k ayega
    cout<<"The string in lowercase is "<<dev.substr(1,6)<<endl;// 3 se start hoke 4 character le k ayega
    cout<<"The string after replacing is "<<dev.replace(0,3,"dev")<<endl;// 0 se start hoke 3 character ko "dev" se replace kr dega
    cout<<"The string after replacing is "<<dev.replace(3,6,"Esh")<<endl;// 3 se start hoke 6 character ko "Esh" se replace kr dega
    cout<<"The string after replacing is "<<dev.replace(0,6,"DevEsh")<<endl;
    cout<<"The string after finding is "<<dev.find("Esh")<<endl;// jo character find krne hai wo dena hai   
    
    return 0;
}  

/*
Output
Devesh
Length of string is 6
The string in uppercase is D
The string in lowercase is evesh
The string after replacing is devesh
The string after replacing is devEsh
The string after replacing is DevEsh
The string after finding is 3
*/