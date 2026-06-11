#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>& v, int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];
    }
    int k = 0;
    int temp = res;
    while((temp & 1) == 0){
        k++;
        temp = temp >> 1;
    }
    int a = 0;
    for(int i = 0; i < n; i++) {
        if(((arr[i]>>k) & 1) == 1) {
            a ^= arr[i];
        }
    }
    v.push_back(a);
    v.push_back(a^res);
}
int main(){
    int arr[] = {4, 7, 2, 4, 9, 7, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    findUnique(v, arr, n);
    cout<<v[0]<<" "<<v[1];
}