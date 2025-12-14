#include<iostream>
using namespace std;

// void swap(int a, int b){  // receives COPIES of x and y
//     int temp = a;
//     a = b;
//     b = temp; this swap will not swap
// }

void swap1(int &a , int &b){
int temp =a;
a = b;
b = temp;

};

int main(){
    int x = 4, y = 5;
    // swap(x, y);  // x and y remain 4, 5 (unchanged)
    cout<<"before swap "<<x<<" "<<y;
     swap1(x ,y); // Output: 4 5
    cout<<"\nafter swap "<<x<<" "<<y<<endl;  // Output: 5 4
    return 0;   
}