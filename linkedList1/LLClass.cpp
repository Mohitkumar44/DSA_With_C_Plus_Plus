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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtHead(int val){
        Node* t = new Node(val);
        if(size>0){
            t->next = head;
            head = t;
        }
        else{
            head = tail = t;
        }
        size++;    
    }
    void insertAtIdx(int idx, int val){
        // this is important for invalid input indices.
        if(idx>size || idx<0){
            cout<<"invalid index!"<<endl;
        }
        else if(idx == 0){
            insertAtHead(val);
        }
        else if(idx == size){
            insertAtTail(val);
        }
        else{
            // in this case while loop will automatically handle all the cases. there is no need to add addition if else if conditions ( i am adding those conditions only because of understanding ).
            Node* temp = head;
            Node* t = new Node(val);
            while(idx>1){
                temp = temp->next;
                idx--;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx >= size || idx < 0){
            cout<<"Invalid Index!"<<endl;
            return -1;
        } 
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            while(idx>=1){
                temp = temp->next;
                idx--;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size<=0){
            cout<<"list is empty!"<<endl;
        }
        else if(size>0){
            head = head->next;
            size--;
        }
    }
    void deleteAtTail(){
        if(size<=0){
            cout<<"list is empty!"<<endl;
        }
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            Node* temp = head;
            while(temp->next!=tail) temp = temp->next;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"list is empty!"<<endl;
        }
        else if(idx<0 || idx>=size){
            cout<<"invalid index!"<<endl;
        }
        else if(idx==0){
            deleteAtHead();
        }
        else if(idx==size-1){
            deleteAtTail();
        }
        else{
            Node* temp = head;
            while(idx>1){
                temp = temp->next;
                idx--;
            } 
            temp->next = temp->next->next;
            size--;
        }
    }

};
int main(){
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtHead(5);
    ll.insertAtIdx(3, 65);
    ll.deleteAtHead();
    ll.display();
    cout<<ll.getAtIdx(3)<<endl;
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();
    return 0;
}