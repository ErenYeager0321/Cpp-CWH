#include<iostream>
using namespace std;

//struct isliye use nai krte kyuki usme object nai bana skte aur access specifier nahi hote hai jaise oublive prvate protected 

class emp{
    private:
        int a , b, c;
    public:
    int d,e;//look at the tut21 practice
    void setdata(int a, int b , int c);// declaration kuki ye private hai isliye declare krne pdega function ka use krke
    //jab kisi function ke andar int ya kuch aur likhe mtlb uski value de skte hai
    // private data ko  public me fucntion ke sath access kr skte hai
    // idhar pe setdata function ka mtlb ye hai ki hamne class se kaha hai ki ham setdata funtion aage bnayenge scope resolutiob ka use krke(::)
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void emp::setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    emp e;
    // e.a=20; will show error of decalred private 
    e.d=4;//agar inki value nai denge to ye automaticaally garbage value de denge
    e.e=5;
    e.setdata(1,2,3);
    e.getdata();// abhi d or e ki garbage value aayegi lekin ab baad me uper d or e ki value de denge
    // ab sochenge ki a b c ki bhi value aise hi ku nai dete wo siliye nai de skte kyuki wo value private hau aur fucntion public me hai to error dikha dega
    //error-note: declared private here
        //  int a , b, c;
    return 0;
}
/*output
The value of a is 1
The value of b is 2
The value of c is 3
The value of d is 4
The value of e is 5
*/