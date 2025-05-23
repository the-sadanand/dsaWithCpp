#include<iostream>
using namespace std;
int main(){
    int arr[100], n;
    cout << "Enter the number of elements up to 100: ";
    cin >> n;
    cout << "Enter the elements  "; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The Unsorted array is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j<=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            j--;
        }
    }
    // or while(j>=1 && arr[j]<arr[j-1])
    cout << "The Sorted array is: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}