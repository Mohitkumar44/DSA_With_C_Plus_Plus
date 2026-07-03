#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    int n = 8;
    for (int i = 0; i < n; i++)  // fill the queue.
    {
        q.push(i+1);
    }
    stack<int> st;
    for (int i = 0; i < n/2; i++) // push half elements in stack.
    {
        st.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n/2; i++) // reverse half elements.
    {
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < n/2; i++) // push half elements in stack.
    {
        st.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++) // mix the elements.
    {
        if(i%2){
            q.push(q.front());
            q.pop();
        }
        else{
            q.push(st.top());
            st.pop();
        }
    }
    for (int i = 0; i < n; i++) // push all elements in stack.
    {
        st.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++) // reverse all elements.
    {
        q.push(st.top());
        st.pop();
    }
    display(q);
}