#include<iostream>
#include<unordered_set>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int fbu(int x, unordered_set<int>& st, vector<int>& dp) {
    dp[0] = 0;
    for(int i = 1; i <= x; i++) {
        int result = INT_MAX;
        for(int ele : st) {
            if(ele <= i) result = min(result, dp[i - ele]);
        }
        if(result == INT_MAX) dp[i] = INT_MAX;
        else dp[i] = 1 + result;
    }
    return dp[x];
}
int minCoins(int x, unordered_set<int>& st, vector<int>& dp) {
    if(x == 0) return 0;
    if(dp[x]!=-1) return dp[x];
    int result = INT_MAX;
    for(int ele : st) {
        if(ele <= x) result = min(result, minCoins(x - ele, st, dp));
    }
    if(result == INT_MAX) return dp[x] = INT_MAX;
    return dp[x] = 1 + result;
}
int main(){
    int n, x;
    cin>>n>>x;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {  
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    vector<int> dp(x+1, -1);
    int ans = fbu(x, st, dp);
    if(ans == INT_MAX) cout<<-1;
    else cout<<ans;
    return 0;
}