#include<iostream>

#include<string>

#include<algorithm>

#include<vector>

#include<sstream>

using namespace std;

int main(){

string str = "raghav is a maths teacher. He is a DSA";

stringstream ss(str);

string temp;

vector<string> v;

while(ss>>temp) {

v.push_back(temp);

}

// vector print

for(int i=0;i<v.size();i++) {

cout<<v[i]<<endl;

}

cout<<endl;

sort(v.begin(),v.end());
int count =1;
int MAX=1;
for(int i=1;i<v.size();i++) {
   if(v[i]==v[i-1]) count ++;
   else count =1;
   MAX= max (MAX,count);

}
cout<<MAX<<endl;
for(int i=1;i<v.size();i++) {
   if(v[i]==v[i-1]) count ++;
   else count =1;
   if(count == MAX){
    cout<<v[i]<<" "<<MAX<<endl;
   }

}


}