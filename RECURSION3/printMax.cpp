#include<iostream>
using namespace std;
// void printMax (int arr[],int n,int max,int idx){
//    if (n==idx){
//     cout<<max;
//     return;
//    }
//    if(max<arr[idx]) max=arr[idx];
//    printMax(arr,n,max,idx+1);

// }
int max(int arr[],int n,int idx){
    if(n==idx) return 0 ;
     return max(arr[idx],max(arr,n,idx+1));
    
}
int main(){
     int arr[]={84,3,5,6,7,45,7,8+90};
    int n= sizeof(arr)/sizeof(arr[0]);
    //printMax(arr,n,0,0);
    cout<<max(arr,n,0);

}