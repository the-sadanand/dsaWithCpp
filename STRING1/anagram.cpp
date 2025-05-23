#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s, p;
    getline(cin,s);
    getline(cin,p);
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    if(s==p){
        cout<<" true";
    }
    else cout<<"false";
}