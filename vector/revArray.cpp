#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[6],n;
    cout<<"Enter the array  ;";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    int rarr[6];
    for(int j=0, i=5;i>=0,j<6;i--,j++){
        rarr[j]=arr[i];
    }
    cout<<"rev of array is :";
    for(int i=0;i<=5;i++){
        cout<<rarr[i]<<" ";
    }


}