#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c =a+b;
//     return c;
// }// aise function use krte hai jaha hume baar baar same code use krna hota hai


// Function Prototype
// type protype_name (argument list);
int sum(int a, int b);// ab ye int sum koread krega pehle fir niche jake function ko define karega
// int sum(int a, b);//not acceptable means cant use like this
// int sum(int , int );//acceptable    

int main(){
    //Function mtlb ek code ko hisso me baantna aur fir usko use krna , int main is also a fucntion
    // int a, b;
    // cout<<"Enter the first  number";
    // cin>>a;
    // cout<<"Enter the second number";
    // cin>>b;
    // // num1 and num2 are actual parameters
    // cout<<"The sum is "<<sum(a,b);
    cout<<"The sum is "<<sum(5,7);//directly passing values without using variables
    return 0;

}   

int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c =a+b;
    return c;
}//error aayega sum read nai hoga kyuki code pehle main ko read krega isliye ham fuction protoype ka use krte hai

// #include<iostream> ache se explain krne ke liye wapis likha hai bs proper way me
// using namespace std;

// // Function Prototype (declaration)
// int sum(int a, int b);  // tells compiler: "sum exists, takes 2 ints, returns int"

// int main(){
//     cout<<"The sum is "<<sum(5,7);  // now compiler knows sum exists
//     return 0;
// }

// // Function Definition (actual implementation)
// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }