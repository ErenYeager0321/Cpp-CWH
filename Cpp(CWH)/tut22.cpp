
// OOPs - Classes and objects

// C++ - intially called c with classes
// Class 0 extension of structures
// structure had limitations
//    - Members are public
//    - No Methods

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    // private:
    // void chkbin(void); //scope resolution wale method ke liye

public:
    void read(void); //scope resolution wale method ke liy
    void chkbin(void);
    void ones(void);
    void display(void);
    
    // void read(void) // bina :: wale method ke liye
    // {
    //     cout << "Enter a binary number";
    //     cin >> s;
    // }
    
    // void chkbin(void)
    // {
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         if (s.at(i) != '0' && s.at(i) != '1') //!= means not eQual
    //             cout << "Incorrect binary format";
    //         exit(0);
    //     }
    // }

    // void ones(void){
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         if(s.at(i)=='0'){
    //             s.at(i)='1';
    //         }
    //         else {
    //             s.at(i)='0';
    //         }
    //     }
    // }

    // void display(void){
    //     cout<<"Displaying your binary number"<<endl;
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         cout<<s.at(i);
    //     }
    //     cout<<endl;
    // }
};

void binary ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
}

void binary ::chkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        { //!= means not eQual
            cout << "Incorrect binary format";
            exit(0);
        }
    }
}

void binary::ones(void)
{
    chkbin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    // b.chkbin(); // void ones me ise add kiya hai use hi nesting member function kehte hai jaha kis ek obect ko kisi object ke andar hi call kre
    // b.chkbin();// private me daalne ke baad error dega kyuki ab ye private me kr diya hai ab ye main se access nai hoga function se call hoga jaise tut21 me kra tha
    b.ones();
    b.display();

    return 0;
}

/*
Output for read and chkbin
Enter a binary number 110 , binary no. hai to condition apply nai hogi
Enter a binary number 22 , binary no. nahi hai
Incorrect binary format

Output with read chkkbin ones and display
Enter a binary number 1100
Displaying your binary number , ye sirf scope resolution wale method se wark krega
0011
*/