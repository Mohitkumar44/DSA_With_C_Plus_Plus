#include<iostream>
#include<vector>
using namespace std;

void subSequence(int idx, int n, vector<vector<int>>& v, vector<int> ans, int k){
    if(n-idx+1+ans.size()<k){
        return;
    }
    if(ans.size()==k){
        v.push_back(ans);
        return;
    }
    subSequence(idx+1,n,v,ans, k);
    ans.push_back(idx);
    subSequence(idx+1,n,v,ans, k);
    return;
}

int main(){
    int n = 5;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    int k = 3;
    // cout<<"Enter the value of k : ";
    // cin>>k;
    vector<vector<int>> v;
    vector<int> ans;
    subSequence(1,n,v,ans,k);
    int p = v.size();
    for(int i = 0; i < p; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}