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
int MaxNode(Node* root){
    if(root==NULL) return INT8_MIN;
    int lm= MaxNode(root->left);
    int lr= MaxNode(root->right);
    return max(root->val,max(lm,lr));
    
}
int main(){
     Node* a= new Node(1);
    Node* b= new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e= new Node(5);
    Node* f= new Node(6);
    Node* g= new Node(7);
    a->left =b;
    a->right =c;
    b->left =d;
    b->right =e;
    c->left = f;
    c->right =g;
   cout<<MaxNode(a);
}