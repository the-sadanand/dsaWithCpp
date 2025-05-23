#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter a number : ";
    cin>>n;
    bool y;
    // if for if( n%3==0 ||( y=n %5==0) first condition true don't check for next condition.
    if( n%3==0 ||( y=n %5==0)){
    cout<<y<<endl;
        if(n%15!=0){
            cout<<"number lie in case. ";
        }
        else{
             cout<<"only lies in one case. "<<endl;
        }

    }
    else{
      cout<<"number don't lie case. ";
    }
}