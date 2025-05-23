#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
     v.push_back(4);
      v.push_back(89);
       v.push_back(21);
    // for(int i=0;i<5;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }

    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
  // sort(v.begin(),v.end());
    
     for(int i=0;i<4;i++){
        cout<<v.at(i)<<" ";
    }
}