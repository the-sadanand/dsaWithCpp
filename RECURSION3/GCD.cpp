#include<iostream>
using namespace std;
// using division method
int gcd(int a,int b){
    if(a==0) return b;
    gcd(b%a,a);
}
int main(){
    int a=30, b=31;
    cout<<gcd(a,b);
}