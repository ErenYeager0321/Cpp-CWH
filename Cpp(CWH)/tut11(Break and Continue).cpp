#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 10; i++) {
    //     cout<<i<<endl;
    //     if(i==5){
    //         break ;//loop ko yahi rok dega aage print nai krega isko bhale hi condition jyada kyu na ho
    //     }
    // }
    for (int i = 0; i < 10; i++) {
        if(i>=2){
            continue;//ye sirf 2 ko skip krega aur aage print krega
        }
        cout<<i<<endl;
    }
    return 0;
}
