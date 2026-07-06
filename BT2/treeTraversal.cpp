#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(Node* a){
    if(a==NULL) return;
    preorder(a->left);
    cout<<a->val<<" ";
    preorder(a->right);
}
void inorder(Node* a){
    if(a==NULL) return;
    inorder(a->left);
    cout<<a->val<<" ";
    inorder(a->right);
}
void postorder(Node* a){
    if(a==NULL) return;
    postorder(a->left);
    cout<<a->val<<" ";
    postorder(a->right);
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(4);
    Node* c = new Node(7);
    Node* d = new Node(2);
    Node* e = new Node(5);
    Node* f = new Node(8);
    Node* g = new Node(9);
    Node* h = new Node(10);
    Node* i = new Node(11);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    d->right = g;
    g->left = h;
    g->right = i;
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);
}