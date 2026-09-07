#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> res(n+1, 0);
    for (int i = 0; i < m; i++)
    {
        int x;
        int y;
        cin>>x>>y;
        res[x]++;
        res[y+1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        res[i] = res[i] + res[i-1];
    }
    vector<int> maxcoins(n+1, 0);
    for (int i = 1; i <= n; i++)
    {
        maxcoins[res[i]]++;
    }
    for (int i = n-1; i >= 0; i--)
    {
        maxcoins[i] = maxcoins[i] + maxcoins[i+1];
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin>>temp;
        cout<<maxcoins[temp]<<endl;
    }   
    
    return 0;
}