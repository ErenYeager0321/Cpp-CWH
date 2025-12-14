#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int factorial(int n){
    if (n<=1){// base case , 6 se kam krenge to 5 me bhi 1  aa jayega
// Base case — rukne ki condition (nahi to infinite loop chalega)
// Recursive case — function apne aap ko call kare
// Progress towards base case — har baar input chhota hona chahiye
        return 1;
    }
    return n* factorial(n-1);
}

//Step by step breakdown of factorial of 4
// factorial(4) = 4 * factorial(3)
// factorial(3) = 4 *3 * factorial(2)
// factorial(2) = 4 * 3 * 2 * factorial(1)  
// factorial(1) = 4 * 3 * 2 * 1 = 24

int main(){
    int  a;
    // cout<<"Enter a number to find its factorial: ";
    cout<<"Enter a number to find its fibnocci no : ";
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"the term is fibonacci seQuence at position of "<<a<<" is "<<fib(a)<<endl;
    //fibonacci sequence: 0 1 1 2 3 5 8 13 21 34 ...
    return 0;
}

/*Output for factorial is
Enter a number to find its factorial: 5
the factorial of 5 is 120

output for fibonacci
Enter a number to find its fibnocci no : 5
the term is fibonacci seQuence at position of 5 is 8
the term is fibonacci seQuence at position of 4 is 5
the term is fibonacci seQuence at position of 3 is 3
the term is fibonacci seQuence at position of 2 is 2
*/