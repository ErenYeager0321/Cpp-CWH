#include<iostream>
using namespace std;

typedef struct prac{
    void display(){
    cout<< "This is a structure practice file." << endl;
   } 
} sp;

int main(){
    sp p1;
    p1.display();
    return 0;
}