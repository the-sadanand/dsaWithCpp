#include<iostream>
using namespace std;
int main()
{
 int n;int a=1;
 cout <<"Enter the number of row:";
 cin>>n;
 for(int i=1;i<=n ;i++){
    if(i%2!=0) a=1;
    else a=0;
    for( int j=1;j<=i;j++){
       cout<<" "<<a;
       if(a==0) a=1;
       else a=0;
    }

 cout<<endl;
 }
 cout<<endl;
 for(int i=1;i<=n ;i++){
    for( int j=1;j<=i;j++){
   if((i+j)%2==0)cout<<" "<<1;
   else cout<<" "<<0;
    }

 cout<<endl;
 }
}