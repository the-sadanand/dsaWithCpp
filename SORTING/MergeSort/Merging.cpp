#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a , vector<int>& b , vector<int> &res){
    int i=0;//a
    int j=0;//b
    int k=0;//res
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];  
    }
    if(i==a.size())  while(j<b.size()) res[k++]=b[j++];
    if(j==b.size())  while(i<a.size()) res[k++]=a[i++];
}


int main(){
    int a1[]={3,5,6,53,65,77,33,221,45};
    int a2[]={3,4,56,75,33};

    int n1=sizeof(a1)/sizeof(a1[0]);// n1 sizeof arr one
    int n2=sizeof(a2)/sizeof(a2[0]);// n2 size of arr a2 
    vector<int>v1(a1,a1+n1);
    vector<int>v2(a2,a2+n2);
    for(int i=0;i<n1;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n2;i++){
        cout<<v1[i]<<" ";
    }
    vector<int>res(n1+n2);
    cout<<endl;
    merge(v1,v2,res);
    for(int i=0 ;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}