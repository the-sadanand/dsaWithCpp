#include<iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter the character : ";
    cin>>ch;
    int n=(int)ch;
   // cout<<n;
   if((n>=97 && n<=122)||(n>=65 && n<= 90))
   //if(n>=97 && n<=122||n>=65 && n<= 90) is right  bco'z of herarciey of && is greater then ||
   //two avoid confusion please preffered ()
   {
    cout<<"charcter is an alphabet :";
   }
   else {
    cout<<"character is not an alphabet.";
   }
}