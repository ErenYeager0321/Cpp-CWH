#include<iostream>
using namespace std;

// inline int product(int a, int b){
//     // return a*b;
//     return a*b+1;// aise inline ka use krke sbme value change kra skte hai
// };//inline function ko chote code ke liye use krna hamehsa

// int main(){
//     int a , b;
//     cout<<"Enter the value of a and b ";
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     return 0;
// }


// inline function with static value, inline static ke sath use nai karna hai
// int product(int a, int b){
//     static int c=0;// ye sirf ek baar run hogi aur iski value save rhegi
//     c = c + 1;// iska mtlb ek baar ek baar run hone pe ye 1 hua to next time run hone par 1+1=2 hoga aur fir 3+1 hoga
//     return a*b+c ;
// };

// int main(){
//     int a , b;
//     cout<<"Enter the value of a and b ";
//     cin>>a>>b;
//     cout<<"The value of a and b is "<<product(a,b)<<endl;
//     cout<<"The value of a and b is "<<product(a,b)<<endl;
//     cout<<"The value of a and b is "<<product(a,b)<<endl;
//     cout<<"The value of a and b is "<<product(a,b)<<endl;
//     return 0;
// }

float moneyReceived(int currentMoney , float factor=1.04){// 1.04 is default argument
    return currentMoney * factor;
}

int main (){
    int money = 100000;
    cout<<"If you have "<<money/*currentMoney ka money hai ye*/<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year "<<endl;
    cout<<"For Vip : If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money , 1.1/*changing factor(interest)*/)<<" Rs after 1 year "<<endl;
    return 0;
}