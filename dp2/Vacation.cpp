#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int points(int n, vector<int>& a, vector<int>& b, vector<int>& c, char ch, vector<vector<int>>& dp) {
    if(n-1 < 0) return 0;
    int idx;
    if(ch == 'A') idx = 1;
    if(ch == 'B') idx = 2;
    if(ch == 'C') idx = 3;
    if(dp[n][idx]!=0) return dp[n][idx];
    
    int pointa = INT_MIN;
    int pointb = INT_MIN;
    int pointc = INT_MIN;
    
    if(ch != 'A') {
        pointa = points(n-1, a, b, c, 'A', dp);
    }
    if(ch != 'B') {
        pointb = points(n-1, a, b, c, 'B', dp);
    }
    if(ch != 'C') {
        pointc  = points(n-1, a, b, c, 'C', dp);
    }

    int mxpts =  max(pointa, max(pointb, pointc));
    if(ch == 'A') {
        dp[n][idx] = a[n-1] + mxpts;
    }
    else if(ch == 'B') {
        dp[n][idx] = b[n-1] + mxpts;
    }
    else if(ch == 'C') {
        dp[n][idx] = c[n-1] + mxpts; 
    }
    return dp[n][idx];
}
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
    vector<vector<int>> dp(n+1, vector<int> (4, 0));
    cout<<max(points(n, a, b, c, 'A', dp), max(points(n, a, b, c, 'B', dp), points(n, a, b, c, 'C', dp)));
    return 0;
}