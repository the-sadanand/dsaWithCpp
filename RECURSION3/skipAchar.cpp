#include<iostream>
using namespace std;
void removechar(string ans, string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='a')  removechar(ans,original.substr(1));
    else removechar(ans+ch,original.substr(1) );
}
// another method
// void removechar(string ans, string original,int index){
//     if(original.length()==index){
//         cout<<ans;
//         return;
//     }
//     char ch=original[index];
//     if(ch=='a')  removechar(ans,original,index+1);
//     else removechar(ans+ch,original,index+1);
// }
int main(){
    // string s="sadanad kumar";
    // cout<<s<<endl;
    // string s1="";
    // for(int i=0;i<s.length();i++){
    //     if(s[i]!='a')s1.push_back(s[i]); 
    // }
    // cout<<s1;
    string s= "sadanad kumar";
    removechar("",s);
}