#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(9);
    v[0]=89;
    cout<<v[0];
    v.at(1)=80;
    cout<<endl;
    cout<<v.at(1);
}