#include<iostream>
#include<vector>
using namespace std;
int main() {
    int k, l, m;
    cin>>k>>l>>m;
    vector<int> coins;
    for(int i = 0; i < m; i++) {
        int temp;
        cin>>temp;
        coins.push_back(temp);
    }

    vector<bool> dp(1000005, false);
    dp[1] = true;
    dp[k] = true;
    dp[l] = true;
    for(int i = 2; i < 1000005; i++) {
        if(i == k or i == l) continue;
        dp[i] = !(dp[i - 1] and ((i-l >= 0) ? dp[i - l] : 1) and ((i - k >= 0) ? dp[i - k] : 1));
    }
    
    string st = "";
    for(int i = 0; i < coins.size(); i++) {
        if(dp[coins[i]] == true) st += 'A';
        else st += 'B';
    }
    cout<<st;
    return 0;
}