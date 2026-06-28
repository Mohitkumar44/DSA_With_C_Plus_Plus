#include<iostream>
#include<stack>
using namespace std;
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
    return 0;
}