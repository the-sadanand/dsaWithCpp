#include<iostream>
using namespace std;
int main(){
    int  x;
    x =(7>4)?((7>5)?5:8): 3;
    //(condition)?true_part:false_part
    //if condition is true then it go for true_part else for false_part
    cout<<x;
}