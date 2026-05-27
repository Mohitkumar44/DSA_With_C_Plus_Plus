#include<iostream>
#include<vector>
using namespace std;
void subArray(int arr[], int n, vector<vector<int>>& v, vector<int> k, int idx){
    if(idx>=n){
        v.push_back(k);
        return;
    }
    subArray(arr,n,v,k,idx+1);
    if(k.size()==0 || k[k.size()-1]==arr[idx-1]){
        k.push_back(arr[idx]);
        subArray(arr,n,v,k,idx+1);
    }
}
int main(){
    int arr[] = {1,2,3};
    vector<vector<int>> v;
    vector<int> k;
    int n = sizeof(arr)/sizeof(arr[0]);
    subArray(arr,n,v,k,0);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}