#include<iostream>
using namespace std;
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
     fact=fact*i;
    }
    return fact;
}
int combunation(int a,int r){
     int ncr=factorial(a)/(factorial(r)*factorial(a-r));
     return ncr;
}
int main()
{
    int n;
    cout<<"enter the number of n:";
    cin>>n;
    for(int i =0;i<=n;i++)
    {
        for(int j=0;j<=i;j++){
            cout<<combunation(i,j);
        }
        cout<<endl;
    }
}