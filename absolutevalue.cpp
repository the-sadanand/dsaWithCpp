#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number : ";
    int x;
    cin>>x;
    if (x>0){
        cout<<"Modulus of number : "<<x;
    }
    else {
        x=-x;
        cout<<"Modulus of number : "<<x;
   /*or it can be  cout -x*/
    }
    cout<<endl;
    cout<<x;
    return 0;

}