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
    // if(root == NULL || n < 1) return;
    // if(n==1) cout<<root->val<<" ";
    if(root == NULL){
        return;
    }
    if(n==1){
       cout<<root->val<<" "; 
       return;
    } 
    nthLevel(root->left, n-1);
    nthLevel(root->right, n-1);
}
void nthLevelRev(Node* root, int n){
    // if(root == NULL || n < 1) return;
    // if(n==1) cout<<root->val<<" ";
    if(root == NULL){
        return;
    }
    if(n==1){
       cout<<root->val<<" "; 
       return;
    } 
    nthLevelRev(root->right, n-1);
    nthLevelRev(root->left, n-1);
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void levelOrder(Node* a){
    int n = levels(a);
    for(int i = 1; i <= n; i++){
        nthLevel(a, i);
        cout<<endl;
    }
}
void levelOrderRev(Node* a){
    int n = levels(a);
    for(int i = 1; i <= n; i++){
        nthLevelRev(a, i);
        cout<<endl;
    }
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
    levelOrder(a);
    levelOrderRev(a);
}