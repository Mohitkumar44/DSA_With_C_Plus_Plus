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
void nthLevel(Node* root, int n){
    if(root == NULL || n < 1) return;
    if(n==1) cout<<root->val<<" ";
    nthLevel(root->left, n-1);
    nthLevel(root->right, n-1);
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
    int n = 3;
    nthLevel(a, n);
}