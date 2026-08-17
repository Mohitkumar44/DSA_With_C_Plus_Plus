#include<iostream>
#include<vector>
#include<queue>
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
void inorder(Node* root, vector<int>& v) {
    if(root==NULL) return;
    inorder(root->right, v);
    // cout<<root->val<<" ";
    v.push_back(root->val);
    inorder(root->left, v);
}
void preorder(Node* root, vector<int>& v, int& idx) {
    if(root==NULL) return;
    root->val = v[idx++];
    // cout<<root->val<<" ";
    preorder(root->left, v, idx);
    preorder(root->right, v, idx);
}
void levelOrder(Node* root) {
    queue<Node*> q;
    q.push(root);
    while(q.size()>0) {
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);
    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->left = f; c->right = g;
    vector<int> v;
    levelOrder(a);
    inorder(a, v);
    int idx = 0;
    preorder(a, v, idx);
    levelOrder(a);
    return 0;
}