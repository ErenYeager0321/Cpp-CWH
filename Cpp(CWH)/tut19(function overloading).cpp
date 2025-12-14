#include<iostream>
using namespace std;

/*Funtion overloading*/
//depends on polymorphism
//Polymorphism means 1 hi cheez kai roop le sakti hai
// fucntion overloading means 1 hi fucntion ka naamkaise alag alag kaam kra skta hai
// overloading means same name function but alag kaam diya ho 2 function ko jaise sum(a,b),sum(a,b,c)
int sum(int a, int b){
    cout<<"using fucntion with 2 arguements"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"using fucntjion with 3 arguements"<<endl;// ye btane ke liye hai ki bhalehi sam ename hai but alag hi fucntion use hora hai
    return a+b+c;
}

//Calculating the volume of a cylinder
int volume(double r, int h){
    return(3.14*r*r*h);//pi rsQuare h volume of cyclider
}
//calculating the volume of a cube
int volume(int a){
    return(a*a*a);//pi rsQuare h volume of cyclider
}
//Calculating the volume of a ractangle
int volume(int l , int b , int h){
    return(l*b*h);//pi rsQuare h volume of cyclider
}

int main(){

    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3 , 6 and 9 is "<<sum(3,6,9)<<endl;
    cout<<"The vloume of cylinder is "<<volume(3,6)<<endl;
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of rectangle is "<<volume(3,6,9)<<endl;
    return 0;
}

/*output
using fucntion with 2 arguements
the sum of 3 and 6 is 9
using fucntjion with 3 arguements
the sum of 3 , 6 and 9 is 18
The vloume of cylinder is 169
The volume of cube is 27
The volume of rectangle is 162
*/