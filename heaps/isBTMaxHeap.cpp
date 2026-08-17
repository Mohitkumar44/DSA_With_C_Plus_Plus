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
bool checkNode(Node* root, int& count) {
    if(root==NULL) return true;
    count++;
    bool rootCheck = true;
    if(root->left && root->left->val >= root->val) {
        rootCheck = false;
    }
    if(root->right && root->right->val >= root->val) {
        rootCheck = false;
    }
    bool leftcheck = checkNode(root->left, count);
    bool rightCheck =  checkNode(root->right, count);
    return rootCheck && leftcheck && rightCheck;
}
bool checkCBT(Node* root, int count) {
    queue<Node*> q;
    q.push(root);
    while(count>0) {
        Node* temp = q.front();
        q.pop();
        count--;
        if(temp) {
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    while(q.size()>0) {
        if(q.front()!=NULL) return false;
        q.pop();
    }
    return true;
}
bool checkTree(Node* root) {
    int count = 0;
    return checkNode(root, count) && checkCBT(root, count);
}
int main(){
    // Node* a = new Node(10);
    // Node* b = new Node(5);
    // Node* c = new Node(16);
    // Node* d = new Node(1);
    // Node* e = new Node(8);
    // Node* f = new Node(12);
    // Node* g = new Node(20);
    Node* a = new Node(20);
    Node* b = new Node(16);
    Node* c = new Node(12);
    Node* d = new Node(10);
    Node* e = new Node(8);
    Node* f = new Node(5);
    Node* g = new Node(1);
    a->left = b;
    a->right = c;
    b->left = d; 
    b->right = e;
    c->left = f; 
    c->right = g;
    if(checkTree(a)) cout<<"True";
    else cout<<"False";
    return 0;
}