#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 or n==2) return 1;
    return fibo(n-1)//phale is kam pura ho jayga 
    +fibo(n-2);// to ye call hoga 

}
int main(){
    cout<<fibo(11);
}