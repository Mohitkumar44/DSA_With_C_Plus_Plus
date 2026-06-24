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
class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
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
            temp->prev = tail;
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
        Node* temp = new Node(val);
        if(size>0){
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        else{
            head = tail = temp;
        }
        size++;    
    }
    void insertAtIdx(int idx, int val){
        // this is important for invalid input indices.
        if(idx>size || idx<0){
            cout<<"invalid index!"<<endl;
            return;    // to avoid unnecessary condition checkings.
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
            t->prev = temp;
            temp->next->prev = t;
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
        else if(size/2<idx){
            Node* temp = tail;
            for(int i = 1; i < size-idx; i++){
                temp = temp->prev;
            }
            return temp->val;
        }
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
        if(size==0){
            cout<<"list is empty!"<<endl;
        }
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else if(size>0){
            head = head->next;
            head->prev = NULL;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"list is empty!"<<endl;
        }
        else if(size==1){
            deleteAtHead();
            return;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
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
            while(idx>=1){
                temp = temp->next;
                idx--;
            } 
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            size--;
        }
    }

};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    list.insertAtHead(50);
    list.display();
    list.insertAtIdx(2,60);
    list.display();
    // list.deleteAtHead();
    // list.deleteAtTail();
    list.display();
    // list.deleteAtIdx(2);
    list.display();
    cout<<list.getAtIdx(4);
    return 0;
}