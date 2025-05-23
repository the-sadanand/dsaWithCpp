#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of star: ";
    cin>>n;
    int mid=n/2+1;
    if(n%2!=0){
        for(int i=1;i<=n;i++){
            for(int k=1;k<=n;k++){
                    if(i==mid ||k==mid){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                    }

        //     if(i==n/2+1){
        //             for(int k=1;k<=n;k++){
        //                 cout<<"*";
        //             }
        //         }
        //   else{ 
        //      for(int j=1;j<=n;j++){
        //         if(j==n/2+1){
        //             cout<<"*";
        //         }
        //         else cout<<" ";
        //   }  
        //     }
        
        cout<<endl;
        
        }
    }
}