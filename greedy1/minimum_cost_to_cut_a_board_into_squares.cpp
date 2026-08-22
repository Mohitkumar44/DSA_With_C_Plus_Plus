#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int costOfCutting(int m, int n, vector<int>& x, vector<int>& y) {
    int cost = 0;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int i = x.size()-1;
    int j = y.size()-1;
    int vcut = 1;
    int hcut = 1;

    while(i >= 0 && j >= 0) {
        if(x[i] >= y[j]) {
            cost += x[i]*hcut;
            vcut++;
            i--;
        }
        else {
            cost += y[j]*vcut;
            hcut++;
            j--;            
        }
    }
    while(i >= 0) {
        cost += x[i]*hcut;
        i--;
    }
    while(j >= 0) {
        cost += y[j]*vcut;
        j--;
    }
    return cost;
}
int main() {
    int m,n;
    cin>>m>>n;
    vector<int> x, y;
    for(int i = 0; i < m-1; i++) {
        int k;
        cin>>k;
        x.push_back(k);
    }
    for(int i = 0; i < n-1; i++) {
        int k;
        cin>>k;
        y.push_back(k);
    }
    cout<<costOfCutting(m, n, x, y);
    return 0;
}