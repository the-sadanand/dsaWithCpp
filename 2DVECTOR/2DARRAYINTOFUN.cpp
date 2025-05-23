#include<iostream>
using namespace std;
void change(int a[]){
    a[0]=9;
}
void dchange(int arr[] [3]){//2d me size dena paeta hai
    arr[0][0]=4;
}
int main(){
    int a[]={1,3,5};
    cout<<a[0]<<endl;
    change(a);
    cout<<a[0]<<endl;
    int arr[][3]={{1,6,7},{4,6,7},{5,0,9}};
     cout<<arr[0][0]<<endl;
     dchange(arr);
      cout<<arr[0][0]<<endl;
}