#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int > v;
    v.push_back(80);

    cout<<v[0]<<endl;
      v.push_back(87);
      cout<<v.size()<<endl;
      cout<<v.capacity()<<endl;
    // cout<<v[1]<<endl;
     v.push_back(41);
    // cout<<v[2]<<endl;
    cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
     v.push_back(89);
    // cout<<v[3]<<endl;
    
}