#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left=NULL;
    Node* right=NULL;
    Node(int val){
        this->val=val;
    }
};
int Level(Node* root){
    if(root==NULL) return 0;
    int l= Level(root->left);
    int r= Level(root->right);
    return 1+max(l,r);
}
int main(){
     Node* a= new Node(1);
    Node* b= new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e= new Node(5);
    Node* f= new Node(6);
    Node* g= new Node(7);
    Node* i=new Node(8);
    Node* h= new Node(9);
    Node* j= new Node(7);
    Node* k=new Node(8);
    Node* l= new Node(9);
    a->left =b;
    a->right =c;
    b->left =d;
    b->right =e;
    c->left = f;
    c->right =g;
    d->left =i;
    i->left= h;
    i->right=j;
    j->left=k;
    j->right=l;
    cout<<Level(a)<<endl;
    cout<<Level(a->left);
}