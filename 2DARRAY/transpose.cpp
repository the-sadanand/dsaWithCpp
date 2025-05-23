#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the no of rows : ";
    cin>>n;
    cout<<"Enter the no of coloums :";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the element"<<i+1<<j+1<<": ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 //coloum wise printing here array is same 

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // storing in another array 
    int brr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        brr[i][j]=arr[j][i];  
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}