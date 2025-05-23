#include<iostream>
using namespace std;
int main(){
    char str[]={'a','c','f','d','\0'};
    char str1[6]="abcde";
    for(int i=0;i<4;i++){
        cout << str[i];
    }
   cout<<endl;
    for(int i=0;str[i]!='\0';i++){
        cout << str[i];
    }
    cout<<endl;
     for(int i=0;str1[i]!='\0';i++){
        cout << str1[i];
    }
   cout<<endl;
   cout<<(int) str1[5];
   cout<<endl;
   cout<<(int) str[5];
   cout<<endl;
    cout<<str;
    cout<<endl;
    cout<<str1;


}