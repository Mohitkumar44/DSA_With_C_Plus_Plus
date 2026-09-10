#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> dp(105, vector<int> (105, -1));
int g(vector<int>& color, int i, int j) {
    int res = 0;
    for (int k = i; k <= j; k++)
    {
        res = (res + color[k])%100;
    }
    return res;
}
int f(vector<int>& color, int i, int j) {
    if(dp[i][j]!=-1) return dp[i][j];
    int res = INT_MAX;
    if(i == j) return dp[i][j] = 0;
    for (int k = i; k <= j-1; k++)
    {
        res = min(res, f(color, i, k) + f(color, k+1, j) + g(color, i, k)*g(color, k+1, j));
    }
    return dp[i][j] = res;
}
int fbu(vector<int>& color) {
    for (int len = 2; len <= color.size(); len++)
    {
        for (int i = 0; i <= color.size() - len; i++)
        {
            int j = i + len - 1;
            int res = INT_MAX;
            for (int k = i; k <= j-1; k++)
            {
                res = min(res, dp[i][k] + dp[k+1][j] + g(color, i, k)*g(color, k+1, j));
            }
            dp[i][j] = res;
        }
        
    }
    return dp[0][color.size()-1];
}
int main(){
    int n;
    while(cin>>n) {
        vector<int> color(n);
        dp.clear();
        // dp.resize(105, vector<int> (105, -1));
        dp.resize(105, vector<int> (105, 0));
        for (int i = 0; i < n; i++)
        {
            cin>>color[i];
        }
        // cout<<f(color, 0, n-1)<<endl;  
        cout<<fbu(color)<<endl;  
        color.clear();   
    }
    return 0;
}