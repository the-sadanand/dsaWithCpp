#include<iostream>
#include<vector>
using namespace std;
// find the HCF
int main(){
    int a=48,b=9;

    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            cout<<i;
            break;
        }
    }
}