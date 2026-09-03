#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for(int i = 0; i < n; i++) {
        int temp;
        cin>>temp;
        a.push_back(temp);
        cin>>temp;
        b.push_back(temp);
        cin>>temp;
        c.push_back(temp);
    }
    vector<vector<int>> dp(n+1, vector<int> (3, -1));
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    for(int i = 1; i < n; i++) {
        dp[i][0] = a[i] + max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = b[i] + max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = c[i] + max(dp[i-1][1], dp[i-1][0]);
    }
    cout<<max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2]));
    return 0;
}