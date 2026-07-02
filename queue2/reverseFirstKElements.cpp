#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseKElements(queue<int>& q, int k){
    stack<int> st;
    int n = q.size();
    for(int i = 0; i < k; i++){
        st.push(q.front());
        q.pop();
    }
    for (int i = 0; i < k; i++)
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
}
void display(queue<int>& q){
    int n = q.size();
    for(int i = 0; i < n; i++){
        q.push(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverseKElements(q, 3);
    display(q);
    return 0;
}