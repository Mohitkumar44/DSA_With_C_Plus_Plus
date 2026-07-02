#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque{
public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head = tail = NULL;
        s = 0;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(s==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            temp->prev = tail;
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
    void push_front(int val){
        Node* temp = new Node(val);
        if(s>0){
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        else{
            head = tail = temp;
        }
        s++;    
    }
    void pop_front(){
        if(s==0){
            cout<<"list is empty!"<<endl;
        }
        else if(s==1){
            head = tail = NULL;
            s--;
        }
        else if(s>0){
            head = head->next;
            head->prev = NULL;
            s--;
        }
    }
    void pop_back(){
        if(s==0){
            cout<<"list is empty!"<<endl;
        }
        else if(s==1){
            pop_front();
            return;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
            s--;
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
    Deque q;
    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
    q.push_back(40);
    q.display();
    q.push_front(50);
    q.display();
    q.push_front(60);
    q.display();
    q.pop_back();
    q.display();
    q.pop_front();
    q.display();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
}