#include<iostream>
using namespace std;
int main()
{
 int n;int a=1;
 cout <<"Enter the number of row:";
 cin>>n;
 for(int i=1;i<=n ;i++){
    for( int j=1;j<=i;j++){
       cout<<" "<<a;
       a++;
    }
 cout<<endl;
 }
}