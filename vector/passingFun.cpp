#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){
    a[0]=100;
}
void dochange(vector<int> &a){
    a[0]=100;
}
int main(){
    vector<int> v;
    cout<<"enter the vector"<<endl;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    change(v);
     for(int i=0;i<5;i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    dochange(v);
     for(int i=0;i<5;i++){
        cout<<v[i]<<"  ";
    }


}