#include<iostream>
#include<vector>
using namespace std;
// will work in unique element only if there is commamn the itterative
void subArray(vector<int>v, int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return ;
    }
    subArray(v,arr,n,idx+1);
    if(v.size()==0 ||arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subArray(v,arr,n,idx+1);
    }
    // else if (arr[idx-1]==arr[v.size()-1]){
    //     v.push_back((arr[idx]));
    //     subArray(v,arr,n,idx+1);

    // }
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    subArray(v,arr,n,0);
}