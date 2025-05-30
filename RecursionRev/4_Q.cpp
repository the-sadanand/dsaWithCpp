#include<iostream>
using namespace std;
int power(int a ,int b){
    if(b==0){
        cout<<"Base case hit"<<endl;
        return 1;
    }
    cout<<"Entering power ("<<a<<","<<b<<")"<<endl;
    int pow=a*power(a,b-1);
    cout<<"Returning From ("<<a<<","<<b<<"): "<<pow<<endl;
    return pow;
}

int main(){
    int res;
    res=power(2,3);
    cout<<res;
}