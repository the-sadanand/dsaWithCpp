#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s= "my name is sadanand kumar";
    stringstream ss(s);
    string temp;
    while(ss<<temp){
        cout<<temp<<endl;
    }
}