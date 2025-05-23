#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int ele:arr){
        cout<<ele<<" ";
    }
    for(int i=0;i<n-1;i++){
        int minIndex=-1;
        int minValue=INT_MAX;
        for(int j=i;j<n;j++){
            if(arr[j]<minValue){
                minValue=arr[j];
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    cout<<endl; 
    for(int ele:arr){
        cout<<ele<<" ";
    }
}