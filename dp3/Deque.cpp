#include<iostream>
#include<vector>
using namespace std;
vector<vector<long long>> dp(3005, vector<long long> (3005, -1));
// long long f(vector<int>& v, int st, int ed) {
//     if(st == ed) {
//         return dp[st][ed] = v[st];
//     }
//     if(dp[st][ed] != -1) return dp[st][ed];
//     return dp[st][ed] = max(v[ed] - f(v, st, ed-1), v[st] - f(v, st+1, ed));
// }
long long fbu(vector<int>& v, int n) {
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = v[i];
    }
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            dp[i][j] = max(v[i] - dp[i+1][j], v[j] - dp[i][j-1]);
        }
        
    }
    return dp[0][n-1];
}
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    // cout<<f(v, 0, n-1);
    cout<<fbu(v, n);
    return 0;
}