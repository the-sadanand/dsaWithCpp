#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of n:";
    cin>>n;
    for(int i =0;i<=n;i++)
    {
        int curr=1;
        for(int j=0;j<=i;j++){
        int next=curr*(i-j)/(j+1);
        cout<<curr;
        curr=next;
        }
        cout<<endl;
    }
}