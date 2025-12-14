#include<iostream>
using namespace std;

int glo = 20 ;// global variable its value can be used anywhere in the program and its always written outside the main function

class Glovar{
public:
    void show() {
        cout<<glo;
    }
};
    
int main(){
    Glovar g;
    g.show();
    return 0;
}   