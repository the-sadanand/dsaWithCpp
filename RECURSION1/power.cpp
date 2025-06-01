#include<iostream>
using namespace std;
int power(int a,int b ){
     if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    cout<<power(2,3);
}

// jab tak kis call ka base condition hit nahi ho jata tab 
// tab tak us function ka call laga rahta hai 
// ho sake use ander koi aur function ka call laga ho is se 
// matlab nahi hai