#include <iostream>
#include <stack>
using namespace std;
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

int main()
{
    string s = "(2+6)*4/8-3";

    stack<string> val;
    stack<char> op;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            val.push(to_string(s[i] - '0'));
        }
        else
        {
            if (op.size() == 0 || s[i] == '(' || op.top() == '(')
            {
                op.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (op.top() != '(')
                {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    val.push(val1 + val2 + ch);
                }
                op.pop();
            }
            else if (prio(s[i]) > prio(op.top()))
            {
                op.push(s[i]);
            }
            else
            {
                while (op.size() > 0 && prio(s[i]) <= prio(op.top()))
                {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    val.push(val1 + val2 + ch);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() > 0)
    {
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        val.push(val1 + val2 + ch);
    }
    cout << val.top() << endl;
}