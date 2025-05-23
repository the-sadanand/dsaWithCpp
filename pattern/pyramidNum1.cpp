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
        cout<<"  ";
    } 
    int b=1;
     for( int j=1;j<=i;j++){
        cout<<" "<<(char)2;
        }
     for( int k=1;k<=i-1;k++){
        cout<<" "<<(char)3;
        }

 cout<<endl;
 }
}