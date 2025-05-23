#include<iostream>
using namespace std;
// isme kuch galti hai
int  power(int x,int n){
    int ans;
    if(n==1) return x;
    if(n%2!=0)
     ans= x*power(x,n/2);
    else ans=power(x,n/2);
    return ans*ans;
}
int main(){
    cout<<power(2,5)<<endl;
}