#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="abcdef";
    // substr(index, length)
    cout<<s.substr(0,2)<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(4)<<endl;
    cout<<s.substr(2,4)<<endl;
    

}