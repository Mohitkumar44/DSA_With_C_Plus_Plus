#include<iostream>
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
class Queue{
public:
    Node* head;
    Node* tail;
    int s;
    Queue(){
        head = tail = NULL;
        s = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(s==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void pop(){
        if(s<=0){
            cout<<"list is empty!"<<endl;
        }
        else if(s>0){
            Node* temp = head;
            head = head->next;
            s--;
            delete(temp);
        }
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return s;
    }
    bool isEmpty(){
        if(s==0) return true;
        else return false;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.display();
    q.push(60);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
}