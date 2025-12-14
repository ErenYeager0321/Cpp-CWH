#include<iostream>
using namespace std;

int main(){
    // Loops in c++
    // 1 for loop
    // 2 while loop
    // 3 do-while loop
     
    // for loop
    // for(int i=0; i<=40; i++){//i++ means i=i+1
    //     cout<<i<<endl;
    //     // i++;//this will increment i by 1 extra so output will be 0,2,4,6...
    // }

    // while loop
    // printing 1 to 40 using while loop
    int i=1; 
    while(i<=40){
        cout<<i<<endl;
        i++;
    }

    // do-while loop
    // int i=1;
    // do{//kam se kam ek baar to chalega hi chahe condition(while) false hi kyu na ho
    //     cout<<6 * i<<endl;//table of 6
    //     i++;
    // }while(i<=10);

    return 0;
}
 /*Output for do while to make table of 6
6
12
18
24
30
36
42
48
54
60*/