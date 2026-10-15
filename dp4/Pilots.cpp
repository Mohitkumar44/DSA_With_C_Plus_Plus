#include<iostream>
#include<vector>
using namespace std;
int f(vector<int>& c_salary, vector<int>& a_salary, int i, int cnt, vector<vector<int>>& dp) {
    if(i >= c_salary.size()) return 0;
    if(dp[i][cnt] != -1) return dp[i][cnt];
    if(cnt == 0) {
        return dp[i][cnt] = a_salary[i] + f(c_salary, a_salary, i+1, cnt+1, dp);
    }
    else if(cnt == c_salary.size() - i) {
        return dp[i][cnt] = c_salary[i] + f(c_salary, a_salary, i+1, cnt-1, dp);
    }
    else {
        return dp[i][cnt] = min(a_salary[i] + f(c_salary, a_salary, i+1, cnt+1, dp), c_salary[i] + f(c_salary, a_salary, i+1, cnt-1, dp));
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> c_salary(n);
    vector<int> a_salary(n);
    vector<vector<int>> dp(n + 1, vector<int> (n/2 + 1, -1));
    for(int i = 0; i < n; i++) {
        cin>>c_salary[i]>>a_salary[i];
    }
    int res = f(c_salary, a_salary, 0, 0, dp);
    cout<<res;
    return 0;
}