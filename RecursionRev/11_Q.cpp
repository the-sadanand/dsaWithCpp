#include<iostream>
#include<vector>
using namespace std;
void perfectPizza(int n , vector<int>top){
    if(n==0){
        for(int ele:top) cout<<ele<<" ";
        cout<<endl;
        return ;
    }
    if(n<0) return;
    top.push_back(1);
    perfectPizza(n-1,top);
    top.pop_back();
    top.push_back(2);
    perfectPizza(n-2,top);
    top.pop_back();
    top.push_back(3);
    perfectPizza(n-3,top);
    top.pop_back();
}

int main(){
    vector<int>topping;
    perfectPizza(3,topping);
    for(int ele:topping){
        cout<<ele<<" ";
    }
}