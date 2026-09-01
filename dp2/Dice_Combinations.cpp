#include<iostream>
#include<vector>
using namespace std;
int dice(int n, vector<int>& dp) {
    if(dp[n]!=-1) return dp[n];
    int mod = 1000000007;
    int cnt = 0;
    if(n == 0) return 1;
    for(int i = 1; i <= 6; i++) {
        if(i <= n) {
            cnt = (cnt%mod + dice(n-i, dp)%mod)%mod;
        }
        else break;
    }
    return dp[n] = cnt;
}
int fbu(int n, vector<int>& dp) {
    int mod = 1000000007;
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        int cnt = 0;
        for(int j = 1; j <= 6; j++) {
            if(j <= i) {
                cnt = (cnt%mod + dp[i-j]%mod)%mod;
            }
            else break;
        }
        dp[i] = cnt;        
    }
    return dp[n];
}
int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    // cout<<dice(n, dp);
    cout<<fbu(n, dp);
    return 0;
}