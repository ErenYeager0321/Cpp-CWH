#include<iostream>
using namespace std;

// This willnot swap a and b using call by value
 void swap(int a , int b){ //temp a b
     int temp = a;         //4    4 5
     a =b;                 //4    5 5
     b = temp;             //4    5 4 
 }
//its like bluetooth se kisi ko file di aur usne apne phone e canges kr liyw but tumhare me to change nai hoga

// This will swap a and b using call by reference using pointers
void swapPointer(int* a , int* b){ //temp a b
    int temp = *a;                 //4    4 5
    *a = *b;                       //4    5 5
    *b = temp;                     //4    5 4 
}

// This will swap a and b using call by reference using reference variables
void swapRefernceVar(int &a , int &b){ //temp a b
    int temp = a;                      //4    4 5
    a = b;                             //4    5 5
    b = temp;                          //4    5 4 
}

int main(){
    int x =4 , y =5;
    cout<<"before swap "<<x<<" "<<y<<endl;
    swap(x,y); 
    cout<<"after swap "<<x<<" "<<y<<endl;//values will remain same because call by value

    swapPointer(&x,&y); //passing address of x and y
    cout<<"after swap "<<x<<" "<<y<<endl;//values will be swapped because call by
    
    swapRefernceVar(x,y); //passing reference variables of x and y using reference variables
    cout<<"after swap "<<x<<" "<<y<<endl;//values will be swapped because call
    
    return 0;
}