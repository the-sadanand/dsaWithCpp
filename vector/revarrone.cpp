#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
      int temp;
      temp=*a;
      *a=*b;
      *b=temp;
}
void take(int arr[],int n){
    
    // cout<<"Enter the size ";
    // cin>>n;
    //int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void  reverse(int arr[],int size){
    for(int i=0,j=size-1;i<j;j--,i++){
     //  arr[i]=arr[j];
    swap(arr[i],arr[j]);
//    int temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
   }
}
int main()
{   int n;
     cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    take(arr,n);
    display(arr,n);
    reverse(arr,n);
//    int i,j;
//    while(i<=j){
//        arr[i]=arr[j];i++;j--;
//    }
    cout<<endl;
    display(arr,n);
}