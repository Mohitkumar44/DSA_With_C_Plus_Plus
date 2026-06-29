#include <iostream>
#include <stack>
using namespace std;
string removeDuplicates(string s)
{
    int n = s.size();
    stack<char> st;
    for(int i = n-1; i >= 0; i--){
        if(st.size() == 0 || s[i] != st.top()){
            st.push(s[i]);
        }
    }
    s = "";
    int k = st.size();
    for (int i = 0; i < k; i++)
    {
        s += st.top();
        st.pop();
    }
    return s;
}
int main()
{
    string s = "aaabbcdeef";
    string ans = removeDuplicates(s);
    cout<<ans;
}