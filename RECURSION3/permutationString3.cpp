#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ="abcde";
    string left=str.substr(0,2);
    cout<<left<<endl;
    string right = str.substr(2+1);
    cout<<right<<endl;
}