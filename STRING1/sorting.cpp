#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string : ";
    getline(cin,s);
    reverse(s.begin(),s.end());//follow asscii value
    cout<<s<<endl;// space' ' is also a character it's asscii is 32
    sort(s.begin(),s.end());
    cout<<s;
}