#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s){
    int i=0;
    int j=s.size()- 1;
    while(i<j){
        if(s[i]!=s[j]) return false;
    }
    return true;
}
int main(){
    string s="racecar";
    cout<<palindrome(s);
}