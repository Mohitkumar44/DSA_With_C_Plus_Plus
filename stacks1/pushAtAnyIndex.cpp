#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
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
void pushAtIndex(stack<int>& st, int val, int idx){
    stack<int> helper;
    while(st.size()>idx){
        helper.push(st.top());
        st.pop();
    }
    st.push(70);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtIndex(st, 70, 2);
    print(st);
    return 0;
}