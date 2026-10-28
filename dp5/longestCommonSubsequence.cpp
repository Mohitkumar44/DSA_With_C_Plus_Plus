#include <bits/stdc++.h>
using namespace std;

string common(string& str1, string& str2, int i, int j, vector<vector<string>>& dp) {
    if(i >= str1.size() || j >= str2.size()) return "";
    if(dp[i][j] != "A") return dp[i][j];
    if(str1[i] == str2[j]) {
        return dp[i][j] = str1[i] + common(str1, str2, i+1, j+1, dp);
    }
    else {
        string a = common(str1, str2, i, j+1, dp);
        string b = common(str1, str2, i+1, j, dp);
        if(a.size() > b.size()) return dp[i][j] = a;
        else return dp[i][j] = b;
    }
}
string longestCommonSubsequence(string str1, string str2) {
    int m = str1.size(), n = str2.size();
    vector<vector<string>> dp(m, vector<string> (n, "A"));
    string s = common(str1, str2, 0, 0, dp);
    return s;
}

int main(){
    string a, b;
    cin>>a>>b;
    string res = longestCommonSubsequence(a, b);
    cout<<res;
    return 0;
}