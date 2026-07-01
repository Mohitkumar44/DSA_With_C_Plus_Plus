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
    string s = "-/*+79483";

    stack<string> val;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            val.push(to_string(s[i] - '0'));
        }
        else
        {
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            val.push(val1 + s[i] + val2);
        }
    }
    cout << val.top() << endl;
}