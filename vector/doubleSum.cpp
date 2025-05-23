#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,n;
    cout<<" Enter target : ";
    cin>>x;
    cout<<"size of array : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);

    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=1+i;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;

            }
        }
    }
}