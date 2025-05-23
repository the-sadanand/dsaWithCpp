#include<iostream>
using namespace std;
int main(){
    int a=2;

    int *ptr=&a;
    int *p=&a;
   // p=p+1;
    *p=*p+1;// (*p)++; 
    cout<<ptr<<endl;
     cout<<*p<<endl;
    //cout<<(int)ptr+1;

}