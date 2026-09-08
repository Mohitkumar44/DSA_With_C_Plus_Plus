#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> dp;
int ftd(vector<int>& v, int i, int j) {
    if(i+1 >= j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int minRes = INT_MAX;
    for (int k = i+1; k < j; k++)
    {
        minRes = min(minRes, ftd(v, i, k) + ftd(v, k, j) + (v[i]*v[k]*v[j]));
    }
    return dp[i][j] = minRes;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    dp.clear();
    dp.resize(n, vector<int> (n, 0));
    for (int i = 0; i < n; i++) cin>>v[i];
    
    for (int len = 3; len <= n; len++)
    {
        for (int i = 0; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i+1; k < j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + (v[i]*v[k]*v[j]));
            }
            
        }
    }
    cout<<dp[0][n-1];
    // cout<<ftd(v, 0, n-1);
    return 0;
}