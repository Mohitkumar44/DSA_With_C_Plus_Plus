#include<iostream>
#include<stack>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void print(stack<int> st){
    stack<int> helper;
    while(st.size()>0){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size()>0){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    Node* head = new Node(100);
    Node* ptr = head;
    while(st.size()>0){
        Node* temp = new Node(st.top());
        ptr->next = temp;
        ptr = ptr->next;
        st.pop();
    }
    ptr = head->next;
    while(ptr){
        st.push(ptr->val);
        ptr = ptr->next;
    }
    print(st);
    return 0;
}