#include<iostream>
#include<vector>
using namespace std;
void taxiRide(int km, vector<int>&sol){
    if(km==0){
        for(int ele:sol){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
    if(km<0) return;
    sol.push_back(3);
    taxiRide(km-3,sol);
    sol.pop_back();
    sol.push_back(1);
    taxiRide(km-1,sol);
    sol.pop_back();
}

int main(){
    vector<int> ans;
    taxiRide(7,ans);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    
}