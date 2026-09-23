#include<iostream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
#define ld long double
ld dp[101][101][101];
ld f(int r, int s, int p) {
    if(r == 0 || s == 0) return 0;
    if(p == 0) return 1;
    if(dp[r][s][p] > -0.9) return dp[r][s][p];
    ld total = r*s+s*p+p*r;
    return dp[r][s][p] = f(r,s-1,p)*((r*s)/total) + f(r,s,p-1)*((s*p)/total) + f(r-1,s,p)*((p*r)/total);
}
int main(){
    int r,s,p;
    cin>>r>>s>>p;
    vector<ld> res(3);
    memset(dp, -1, sizeof dp);
    res[0] = f(r,s,p);
    memset(dp, -1, sizeof dp);
    res[1] = f(s,p,r);
    memset(dp, -1, sizeof dp);
    res[2] = f(p,r,s);
    for(int i = 0; i < 3; i++) {
        cout<<fixed<<setprecision(12)<<res[i]<<" ";
    }
    return 0;
}