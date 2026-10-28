#include <bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2, vector<vector<int>>& dp)
{
    int m = text1.size(), n = text2.size();
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (text1[i - 1] == text2[j - 1])
            dp[i][j] = 1 + dp[i - 1][j - 1];
            else
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    return dp[m][n];
}

string print(string text1, string text2)
{
    int m = text1.size(), n = text2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    int size = longestCommonSubsequence(text1, text2, dp);
    string res = "";
    int idx = size-1;
    for(int i = 0; i < size; i++) {
        res += '$';
    }
    int i = m;
    int j = n;
    while(i > 0 && j > 0) {
        if (text1[i-1] == text2[j-1])
        {
            res[idx] = text1[i-1];
            idx--;
            i--;
            j--;
        }
        else
        {
            if(dp[i][j-1] < dp[i-1][j]) {
                i--;
            }
            else {
                j--;
            }
        }
    }
    return res;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << print(a, b);
    return 0;
}