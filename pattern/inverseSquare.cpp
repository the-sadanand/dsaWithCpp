#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of side:";
    cin>>n;
      /*  for(int i=1;i<=n;i++)
        {
            for(int j=n;j>=i;j--)
            {
                cout<<"*";
            }
            cout<<endl;
        }*/
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}