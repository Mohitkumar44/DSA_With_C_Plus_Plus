#include<iostream>
#include<stack>
using namespace std;
void stockSpan(int stock[], int stIdx[], int n){
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while(st.size() > 0 && stock[i] >= stock[st.top()]){
            st.pop();
        } 
        if(st.size() == 0) stIdx[i] = i+1;
        else stIdx[i] = i - st.top();
        st.push(i);
    }
}

int main(){
    int stock[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(stock)/sizeof(stock[0]);
    int stIdx[n];
    stockSpan(stock, stIdx, n);
    for (int i = 0; i < n; i++)
    {
        cout<<stIdx[i]<<" ";
    }
    
}