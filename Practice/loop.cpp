#include<iostream>
using namespace std;

    //Array Example
    int main(){
        //Array Example
        int marks[4] = {4 ,3, 6,9 };
        int mathmarks[4];
        cout<<marks[0]<<endl;
        cout<<marks[1]<<endl;
        cout<<marks[2]<<endl;
        cout<<marks[3]<<endl;
    
        mathmarks[0] = 22;
        mathmarks[1] = 25;
        mathmarks[2] = 23;
        mathmarks[3] = 24;
        cout<<"These are math marks"<<endl;
        cout<<mathmarks[0]<<endl;
        cout<<mathmarks[1]<<endl;
        cout<<mathmarks[2]<<endl;
        cout<<mathmarks[3]<<endl;
    
        //Using while loop to print array
        int i = 0;
        while(i < 4){
            cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
            i++;
        }
        return 0;
    }
