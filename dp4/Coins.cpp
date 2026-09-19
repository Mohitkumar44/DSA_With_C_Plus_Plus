#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
double f(vector<double>& v, int idx, int x, vector<vector<double>>& dp) {
    if(idx == v.size()) {
        if (x > 0) return 0;
        else return 1;
    }
    if(x <= 0) return 1;
    if(dp[idx][x]>-0.9) return dp[idx][x];
    return dp[idx][x] = (f(v, idx + 1, x-1, dp)*v[idx]) + (f(v, idx + 1, x, dp)*(1.00-v[idx]));
}
int main(){
    int n;
    cin>>n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    vector<vector<double>> dp(n, vector<double> (n+1, -1));
    cout<<fixed<<setprecision(10)<<f(v, 0, (n+1)/2, dp);
    return 0;
}