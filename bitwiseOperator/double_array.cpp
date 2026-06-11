#include<iostream>
using namespace std;
int find(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];    
    }
    return res;
}
int main(){
    int arr[] = {5,2,4,7,8,6,3,1,5,2,1,4,7,6,3,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr, n)<<endl;
}