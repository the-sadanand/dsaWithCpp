#include<iostream>
#include<vector>
using namespace std;
//  void swap(int *a,int *b ){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//  }
 void display(vector<int > v,int size){
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
 }
//  void reverse(vector<int> v,int size){
//     int i,j;
//     for( i=0,j<size;i<j;i++,j--){
//         swap(&v[i],&v[j]);
//     }
//  }
int main()
{
    vector<int > v;
    v.push_back(9);
    v.push_back(0);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    int i,j;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";}
     for( i=2,j=4;i<j;i++,j--){
        int t=v[i];
        v[i]=v[j];
        v[j]=t;
     }
     cout<<endl;
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
   // display(v,v.size());
}