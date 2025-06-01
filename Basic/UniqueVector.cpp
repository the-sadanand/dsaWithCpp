#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ={1,1,3,4,5,6,7,7,7,8,8};
    vector<int>ans;
    ans.push_back(v[0]);
    for(int i=1 ;i<v.size() ; ++i){
        if(v[i]!=v[i-1]) ans.push_back(v[i]);

    }
    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" ";
    }
}
