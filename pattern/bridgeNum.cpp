#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int a= n,b=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
           if(j>a&&j<b)cout<<" ";
           else cout<<j; 
        }
            a--;
            b++;
        cout<<endl;
    }
}