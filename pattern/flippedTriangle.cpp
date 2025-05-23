#include<iostream>
using namespace std;
int main()
{
 int n;
 cout <<"Enter the number of row:";
 cin>>n;
 for(int i=1;i<=n ;i++){
    for(int k=1;k<=n-i;k++){
        cout<<"%";
    }
   // cout<<"hmm check kar rahe hai";

    for( int j=1;j<=i;j++){
       cout<<"*";
       
    }
 cout<<endl;
 }
}