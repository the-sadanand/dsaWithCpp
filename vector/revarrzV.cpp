#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter the size ";
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    vector<int> e(v.size());
    for(int i=x-1,j=0;i>=0,j<x;i--,j++){
        e.push_back(v[i]);
    }
    for(int i=0;i<x;i++){
       cout<<e[i]<<" ";
    }

}