#include<iostream>
using namespace std;
// using one parameter 
void print(int i ,int n){
    if(i>n) return ;
    cout<<i<<endl;
    print(i+1,n);

}
int main(){
    print(1,5);

}