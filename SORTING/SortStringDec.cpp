#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    string s1 , s2;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='D'){
            s2.push_back(s[i]);
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]>='E' && s[i]<='T'){
            s1+=s[i];
        }
    }

    // cout<<s1<<endl;
    // cout<<s2<<endl;
    sort(s1.begin(),s1.end());
    for(int i=0;i<s2.length();i++){
        for(int j=0;j<s2.length()-1-i;j++){
            if(s2[j]<s2[j+1]){
                swap(s2[j],s2[j+1]);
            }
        }
    }
    cout<<s2<<endl;
    cout<<s1<<endl;
}