#include<iostream>
#include<vector>
using namespace std;
int func(vector<int>& v1, vector<int>& v2, int i, int j, int k, vector<vector<vector<int>>>& dp) {
    if(i < 0 || j < 0) return 0;
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    int res = 0;
    if(v1[i] == v2[j]) {
        return dp[i][j][k] = 1 + func(v1, v2, i-1, j-1, k, dp);
    }
    else {
        if(k > 0) {
            res = 1 + func(v1, v2, i-1, j-1, k-1, dp);
        }
        res = max(res, func(v1, v2, i-1, j, k, dp));
        res = max(res, func(v1, v2, i, j-1, k, dp));
    }
    return dp[i][j][k] = res;
}
int main() {
    int m, n, k;
    cin>>m>>n>>k;
    vector<int> v1(m), v2(n);
    for (int i = 0; i < m; i++)
    {
        cin>>v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
    }
    vector<vector<vector<int>>> dp(m+1, vector<vector<int>> (n+1, vector<int> (k+1, -1)));
    cout<<func(v1, v2, m-1, n-1, k, dp);
    return 0;
}