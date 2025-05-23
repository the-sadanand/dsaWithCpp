#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[]={12,2,4,6,77,8};
    int n=6;
    vector<int>v(n,0);// not visited value is 0
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=0;
    for(int i=0; i<n; i++){
        int minidx=-1;
        int min=INT_MAX;
        for(int j=0; j<n ;j++ ){
            if(v[j]==1)continue;
            else{
                if(arr[j]<min){
                    min=arr[j];
                    minidx=j;
                }
            }
        }
            arr[minidx]=x;
            v[minidx]=1;//visited
            x++;
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}