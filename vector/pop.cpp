#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
     cout<< v[0]<<endl;
     cout<<v[1]<<endl;
     cout<<v[2]<<endl;
    v.pop_back();
     cout<< v[0]<<endl;
     cout<<v[1]<<endl;
     cout<<v[2];
}