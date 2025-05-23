#include<iostream>
using namespace std;
int arrSum(int arr[], int size){
    int sum=0;
    for(int i=0;i<=size-1;i++){
         sum=sum+arr[i];
    }
    return sum;
}
void dochange(int arr[]){
    arr[9]=5;
   // return arr[9];
}
int main(){
    int arr[]={3,6,77,89,7,5,7,9,6,4,7,0,5,8,9,43};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<"size of arr is :"<<size;
    cout<<endl<<arr[0];
    cout<<endl<<&arr[10];
    cout<<endl<<&arr[9];
    cout<<endl<<arr[11];
    int sum=arrSum(arr,size);
    cout<<endl;
    cout<<sum;
    cout<<endl;
    dochange(arr);
    for(int i=0;i<=size-1;i++){
        cout<<"  "<<arr[i];
    }
}