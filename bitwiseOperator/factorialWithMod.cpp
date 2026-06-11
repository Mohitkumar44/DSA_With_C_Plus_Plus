#include<iostream>
#include<vector>
using namespace std;
vector<long long int> fact(int n){
    vector<long long int> v(n+1,1);
    int mod = 1000000007;
    for(int i = 2; i < n+1; i++){
        v[i] = ((i%mod) * (v[i-1]%mod)) % mod;
    }
    return v;
}
int main(){
    int n = 25;
    vector<long long int> ans = fact(n);
    for(int i = 0; i < ans.size(); i++){
        cout<<i<<"! = "<<ans[i]<<endl;
    }
    return 0;
}