#include<iostream>
using namespace std;

typedef struct employee{//behave like a class
    int Id;
    char favChar;
    float salary;
} se;

union money{//behave like a class
    int rupee;
    char dollar;
    float pounds;
};

int main(){
    // struct employee dev; agr type def use na krte to aise likhte
    // se dev;
    // dev.Id = 1;
    // dev.favChar = 'd';
    // dev.salary = 1200000;
    // cout<<"The valus is "<<dev.Id<<endl;
    // cout<<"The valus is "<<dev.favChar<<endl;
    // cout<<"The value is "<<dev.salary<<endl;
    union money m1;
    m1.rupee = 100;
    cout<<m1.rupee<<endl;
    cout<<"\n";

    m1.rupee = 300;
    m1.dollar = 'd';//abhi ye last wali value hi show krega kyuki union me sirf ek hi value store hoti hai ek time pe jo latest hogi wo show kreg bs
    cout<<m1.rupee<<endl;// rupee me abhi dollar wali value hi store hai isliye ye kuch garbar value show krega
    cout<<"\n";

    m1.rupee = 500;
    m1.dollar = 'd';//abhi ye last wali value hi show krega kyuki union me sirf ek hi value store hoti hai ek time pe jo latest hogi wo show kreg bs
    cout<<m1.dollar<<endl;//ab ye sahi value show krega kyuki abhi dollar me last me value store ki hai
    
    return 0;
}