#include<iostream>
#include<vector>
using namespace std;
 void revpart(int i,int j,vector <int >& v){
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;j--;
    }
 }
 void disply(vector<int > v,int size){
    for (int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
 }
int main()
{
   
   int k;
   cout<<"Number of rotation: ";
   cin>>k;
   cout<<"Enter the size of vector: ";
   int n;
   cin>>n;
   vector<int> v;
   cout<<"Entet the vector : ";
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   revpart(0,n-k-1,v);
   revpart(n-k,n-1,v);
   revpart(0,n-1,v);
   disply(v,n);
}