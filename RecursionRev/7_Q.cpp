#include<iostream>
using namespace std;
int climbStair(int n){
    if(n==1 ||n==0){
        return 1;
    }
   int s1= climbStair(n-2);
   cout<<"taking "<<s1<<endl;
   int s2=climbStair(n-1); 
   cout<<"taking "<<s2<<endl;
   return s1+s2;
}

int main(){
    int res;
    int n;
    cout<<"Enter the number of stair ";
    cin>>n;
    res=climbStair(n);
    cout<<"Number of Ways To Climb "<<n<<" is "<<res;
}