#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
int main(){
    
     string t ="catisrat";
     reverse(t.begin(),t.end());
     cout<<t<<endl;
     string s1="Hi.. I am sadanand Kumar";
     int wordCount=1;
     for(char s :s1 ){
          if(s == ' ') wordCount++;
     }
     cout<<wordCount<<endl;
}