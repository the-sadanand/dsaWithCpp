#include<iostream>
using namespace std;
void docheck(int ar[]){
    int * p=ar;
    cout<<p;
}
int main(){
    int ar [2];
    cout<<&ar<<endl;
docheck(ar);
}