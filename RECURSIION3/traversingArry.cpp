#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void disply(int arr[],int n,int i){
    if(i==n) return ;
    cout<< arr[i]<<" ";
    disply(arr,n,i+1);
}
void display1(vector<int> & v,int idx){
    if(v.size()== idx){
     return;
    }
    cout<<v[idx]<<" ";
    display1(v,idx+1);
}
int main(){
    int arr[]={1,3,5,6,7,45,7,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    // for(int ele:arr)
    // cout<<ele<<" ";
    // cout<<endl;
    disply(arr,n,0);
    vector <int> v(n);
    for (int i = 0; i <n; i++)
    {
        v[i]=arr[i];
    }
    cout<<endl;
    display1(v,0);
    
}