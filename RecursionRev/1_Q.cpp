#include<iostream>
using namespace std;
void printNumbers(int n){
    if(n==0) return ;
    cout<<"Going Down :"<<n<<endl;
    printNumbers(n-1);
    cout<<"Going Up: "<<n<<endl;
}
int main(){
    printNumbers(3);
}