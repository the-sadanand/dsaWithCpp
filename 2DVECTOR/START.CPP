#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int> v;
    vector < vector <int> > v;
   // isme hmm v.push_back(90); error
   // isme hmm koi vector push kar sakte hai
vector<int> v1;
vector<int> v2;
vector<int> v3;
v1.push_back(1);
v1.push_back(2);
v2.push_back(8);
v2.push_back(9);
v2.push_back(10);
v2.push_back(11);
v3.push_back(12);
v3.push_back(13);
v3.push_back(14);
//v={{1,2},{8,9,10,11},{12,13,14}}
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);
cout<<v[2][0];

}
