#include<iostream>
using namespace std;
int gcd(int x,int y){
    int i,hcf=1;
    for(i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int thodasaoptimizedgcd(int x,int y){
    int i,hcf=1;
    for(i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}

int main(){
    cout<<"call lag gaya hai"<<endl;
   cout<< gcd(16,20);
}