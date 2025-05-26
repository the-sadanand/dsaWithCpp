#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,1,6,2,5,3};// 1 to n or 0 to n or some use of this similar case
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cycle sort
    int i=0;
    while(i<n){
        int correctIdx =arr[i]-1;
        if(i==correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}