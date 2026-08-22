#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comparator(pair<int, int>& p1, pair<int, int>& p2) {
    double r1 = (p1.first*1.0) / (p1.second*1.0);
    double r2 = (p2.first*1.0) / (p2.second*1.0);
    if(r1 > r2) return true;
    else return false;
}
int fractional_knapsack(vector<int>& profit, vector<int>& weights, int n, int W) {
    vector<pair<int, int> > arr;
    for(int i = 0; i < n; i++) {
        arr.push_back({profit[i], weights[i]});
    }
    sort(arr.begin(), arr.end(), comparator);
    int result = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i].second <= W) {
            result += arr[i].first;
            W -= arr[i].second;
        }
        else  {
            result += ((arr[i].first*1.0) / (arr[i].second*1.0))*W;
            W = 0;
            break;
        }
    }
    return result;
}
int main() {
    vector<int> profit = {60,100,120};
    vector<int> weights = {10,20,30};
    int W = 50;
    int n = 3;
    cout<<fractional_knapsack(profit, weights, n, W)<<endl;
    return 0;
}