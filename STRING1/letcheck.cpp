#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string>v;
    string s="o";
    string d= "n";
    string n="c";
    string ans=s+d+n;
    cout<<s+d+n<<endl<<ans<<endl;
    v.push_back(ans);
    v.push_back(s);
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.capacity();i++){
        cout<<v[i]<<"  " ;
    }
}