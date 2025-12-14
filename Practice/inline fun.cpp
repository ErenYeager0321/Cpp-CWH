#include<iostream>
using namespace std;

inline int sum(int a, int b){
   
    return a+b;  
}

int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"The sum is "<<sum(a,b)<<endl;
    return 0;
}