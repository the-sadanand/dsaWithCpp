#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        cout<<"Base case hit"<<n<<"fact is ("<<1<<")"<<endl;
        return 1;
    }
    cout<<"Entering factorial ("<<n<<")"<<endl;
    int f=n*fact(n-1);
    cout<<"factorial of "<<n<<"is: "<<f<<endl;
    return f;
}

int main(){
    int res;
    res=fact(5);
    cout<<res;
}