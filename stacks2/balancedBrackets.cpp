#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string s)
{
    int n = s.size();
    if(n%2 == 1) return false;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else if (st.size() == 0)
        {
            return false;
        }
        else
        {
            st.pop();
        }
    }
    return st.size() == 0;
}
int main()
{
    string s = "(())()(())";
    cout << isBalanced(s);
}