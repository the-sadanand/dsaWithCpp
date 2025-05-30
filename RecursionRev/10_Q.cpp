#include<iostream>
#include<vector>
using namespace std;
void melody(int n , vector<int> &noteSequence){
    if(n==0){
        for(int ele:noteSequence){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    if(n<0) return;
    noteSequence.push_back(1);
    melody(n-1,noteSequence);
    noteSequence.pop_back();
    noteSequence.push_back(2);
    melody(n-2,noteSequence);
    noteSequence.pop_back();
}
int main(){
    vector<int> melodySequence;
    melody(7,melodySequence);
    for(int ele:melodySequence){
        cout<<ele<<" ";
    }
    return 0;
}