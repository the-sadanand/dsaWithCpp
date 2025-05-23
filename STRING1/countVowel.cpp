#include<iostream>
using namespace std;
int main(){
    string s="sadanad";
    int c=0;
    int i=0;
    while (s[i]!='\0')
    {
        if (s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u')
        {
            c++;
            
        }
        i++;
    }  
    cout<<c;

}
