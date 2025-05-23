#include<iostream>
#include<vector>
using namespace std;
  void remove(vector<int>&v){
   int  i=0,j=v.size()-1;
   int a=0;
    while(i<j){
       if(v[i]>=0){i++; }
       else if(v[j]<0) {j--;}
       else if(v[i]<0&&v[j]>=0)
       {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
       }
    }
    
}
int count(vector<int>v){
    int a=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<0)a++;
    }
    return a;
}
int main(){
   vector<int> v;
   int n;
   cout<<"Enter the size ";
   cin>>n;
   for(int i=0;i<=n-1;i++){
     int x;
     cin>>x;
     v.push_back(x);
   }
  remove(v);
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
   int a=count(v);
cout<<endl;
   for(int i=0;i<n-a;i++){
    cout<<v[i]<<" ";
   }

}