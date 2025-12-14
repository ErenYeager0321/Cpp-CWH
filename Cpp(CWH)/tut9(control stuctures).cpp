#include <iostream>
using namespace std;

// Control structures in C++
// 1 sequence
// 2 selection
// 3 loop structure

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

// Selection control structure if-else-if ladder
    if((age<18)&&(age>0)){ //agar age 1 se 17 hai to ye aayega
        cout<<" Not Eligible";
    }
    else if(age==18){
        cout<<"Eligible but with conditons";
    }
    else if(age<1){
        cout<<"Invalid age entered";
    }
    else{
        cout<<"Eligible";
    }

//Switch case statement
    switch (age)
    {    
        case 18:
        cout<<"Your are 18\n";
        break;//isse baad ke case ko skip kar dega agar 18 age di to agar nai di to iske agle case ko check krega

        case 22:
        cout<<"You are 22\n";
        break;//agar break ni diya to ye niche ke case ko bhi check krega aur print krega

        case 2:
        cout<<"You are 2\n";
        break;
        default:
        cout<<"No special cases\n";
    }
       
    return 0;
} 

/*
Output For Switch case
Enter your age
3
No special cases
Enter your age
22
You are 22
*/

/*
Output for if else
Enter your age
17
Not Eligible
Enter your age
18
Eligible but with conditons
Enter your age
0
Invalid age entered
*/