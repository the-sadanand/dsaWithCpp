#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,4,0,3,0,5,6};
    // count the number of zeros
    int count=0;
    for(int i=0;i<7;i++){
        if(arr[i]==0){
            count++;
        }
    }
    // move all non-zero elements to the end
    for(int i=0;i<count;i++){
        for(int j=0;j<7-i-1;j++){
            if(arr[j]==0 ){
                swap(arr[j],arr[j+1]);
            }
        }
    }  
    cout<<"Sorted array: ";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    } 

}