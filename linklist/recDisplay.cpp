#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void recdisplay(Node* head){
    if(head== NULL) return ;
    cout<<head->val<<" ";
    recdisplay(head->next);
}

void revdisplay(Node* head){//it is not working properly
    if(head== NULL) {//cout<<head->val<<" ";
      return ;}
    
    revdisplay(head->next);
    cout<<head->val<<" ";
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(48);
    Node * c= new Node(45);
    a->next=b;
    b->next=c;
    recdisplay(a);
    cout<<endl;
    revdisplay(a);
}
