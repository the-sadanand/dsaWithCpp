#include<iostream>
using namespace std;
int main()
{
    int x;
    x=(5>8)?10:1!=2<5?20:30;
    //      the bool value of(1!=2<5) is 0
    //>,< has more hererichy then !=
    cout<<x; 
}