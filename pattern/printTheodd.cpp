#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the row : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
         int a=1;
        for(int j=1;j<=i;j++){
            // if(i%2==0)continue;
            // if(j%2!=0){
            //     cout<<j;
            // }
            cout<<" "<<a;
            a+=2;
        }
        cout<<endl;
    }
    
}