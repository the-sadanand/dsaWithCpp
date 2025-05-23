#include<iostream>
using namespace std;
void print (int *ptr , int size){
     for (int i=0;i<=size-1;i++){
        cout <<*ptr<<" ";
        ptr=ptr+1;
     }
}
int main(){
  int arr []={1,4,6,8,4};
  int size=sizeof(arr)/sizeof(arr[0]);
  int *pre=arr;
  print(pre,size);
}