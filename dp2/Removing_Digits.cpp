#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
vector<int> get_digits(int n) {
    vector<int> digits;
    while(n) {
        if(n%10) digits.push_back(n%10);
        n/=10;
    }
    return digits;
}
int removedigit(int n, vector<int>& dp) {
    if(n == 0) return 0;
    if(dp[n]!=-1) return dp[n];
    vector<int> d = get_digits(n);
    int result = INT_MAX;
    for(int i = 0; i < d.size(); i++) {
        result = min(result, removedigit(n - d[i], dp));
    }
    return dp[n] = 1 + result;
}
int fbu(int nums, vector<int>& dp) {
    dp[0] = 0;
    for (int i = 1; i <= 9; i++) dp[i] = 1;
    for (int n = 10; n <= nums; n++) {
        vector<int> d = get_digits(n);
        dp[n] = INT_MAX;
        int result = INT_MAX;
        for (int i = 0; i < d.size(); i++)
        {
            result = min(result, dp[n - d[i]]);
        }
        dp[n] = 1 + result;
    }
    return dp[nums];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(1000005, -1);
    // cout<<removedigit(n, dp);
    cout<<fbu(n, dp);
    return 0;
}