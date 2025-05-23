#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
int main(){
    // string s;char t;
    // cout<<"enter the string : ";
    // getline(cin,s);
    // int count=1;
    // int n=s.length();
    // int max=1;
    // for(int i=0;i<n;i++){
    //     char c=s[i];
    //     for(int j=i+1;j<n;j++){
    //         if(c==s[j]){
    //             count++;
    //         }
    //     }
    //     if(max<count) {max=count;  t=s[i];}
    //     count=1;
    // }
    // for(int i=0;i<n;i++){
    //     char c=s[i];
    //     for(int j=i+1;j<n;j++){
    //         if(c==s[j]){
    //             count++;
    //         }
    //     }
    //     if(max==count) {cout<<max<<" "<<c<<endl;}
    //     count=1;
    // }
   string s;
   cout<<"enter the string: ";
   getline(cin,s);
   vector<int> v(26,0);
   for(int i=0;i<s.length();i++){
    char ch=s[i];
    int ascii=(int )ch;
    v[ascii-97] ++;
   }
   int max=0;
   for(int i=0;i<26;i++){
    if (v[i]>max) max=v[i];  
   }
   for(int i=0;i<26;i++){
    if (v[i]==max) {
         int ascii=i+97;
         char t =(char)ascii;
         cout<<max<<" "<<t<<endl;
    }  
   }




}