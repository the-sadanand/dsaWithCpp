#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of star: ";
    cin>>n;
    if(n%2!=0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                    if(i==j ||j==n-i+1){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                       }
            cout<<endl;
         }
    }
}