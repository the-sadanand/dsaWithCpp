#include<iostream>

using namespace std;
class node{
public:
    int dat;
    node* next;

};
class pNode{
    public:
    int val;
    pNode* next;
    pNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    pNode a(1);
    pNode b(14);
    pNode c(4);
    pNode d(67);
    node a;
    a.dat =10;
    node b;
    node c;

    b.dat= 39;
    a.next=&b;
    cout<<b.dat<<" "<<endl;
    cout<<c.dat<<" "<<c.next<<endl;
    cout<<a.next->dat;
    cout<< a.next<< endl;
    // int d = a.next;
    //  cout<<d.dat;

}