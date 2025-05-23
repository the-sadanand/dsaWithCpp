#include<iostream>
using namespace std;
int main()
{
 int n;int a=1;
 cout <<"Enter the number of row:";
 cin>>n;
 //int a=3;
 for(int i=1;i<=n;i++){
    for(int k=n;k>i;k--){
        cout<<" ";
    } 
     for( int j=1;j<=a;j++){
        cout<<"*";
        
        }
        a=a+2;
 cout<<endl;
 }
}