#include<iostream>
using namespace std;
int main(){
    string s="sadanand";
    cout<<s<<endl;
    s[3]='i';
    cout<<s<<endl;
    int n;
    cout<<"Entet the num : ";
    cin>>n;
    char vowel[n];
    for(int i=0;i<n;i++){
        cin>>vowel[i];
        }
    int i=0;
    while(vowel[i]!='\0'){
        if(vowel[i]=='a'|| vowel[i]=='e'|| vowel[i]=='i'|| vowel[i]=='o'||vowel[i]=='u'){
          vowel[i]='k';
        }
        i++;
    }
    cout<<vowel;
}