#include<iostream>
using namespace std;

int main(){
    int m[3]={10,20,30};
    // cout<<m[0]<<endl;
    // cout<<m[1]<<endl;
    // cout<<m[2]<<endl;
    int i=0;//here i length is 0,1,2 isliye 2 means 30
    do{
        cout<<m[i]<<endl;
        i++;
    }
    while(i<2);//isliye ye sirf 0,1 ki value show krega
    // {
    //     cout<<m[i]<<endl;
    //     i++;
    // }

    return 0;
}