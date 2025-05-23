#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<name<<endl;
    reverse(name.begin()+1,name.begin()+5);// index 1 to 4;
    cout<< name;

}