#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[], int startIdx, int endIdx){
    int pivotIdx = (startIdx+endIdx)/2;
    int n = arr[pivotIdx];
    int idx = startIdx;
    for(int i = startIdx; i <= endIdx; i++){
        if(i==pivotIdx) continue;
        if(arr[i]<=n) idx++;
    }
    // swap
    swap(arr[pivotIdx], arr[idx]);
    int i = startIdx, j = endIdx;
    // while(i<idx && j>idx){
    //     if(arr[i]>arr[idx] && arr[j]<arr[idx]){
    //         swap(arr[i], arr[j]);
    //     }
    //     else if(arr[i]>arr[idx]) j--;
    //     else if(arr[j]<arr[idx]) i++;
    //     else{
    //         i++;
    //         j--;

    //     }
    // }
    while (i < idx && j > idx) {
            if (arr[i] <= n)
                i++;
            else if (arr[j] > n)
                j--;
            else {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    return idx;
}
int quickSelect(int arr[], int startIdx, int endIdx, int k){
    int pivotIdx = partition(arr, startIdx, endIdx);
    if(pivotIdx+1==k) return arr[pivotIdx];
    else if(pivotIdx+1>k) return quickSelect(arr, startIdx, pivotIdx-1, k);
    else return quickSelect(arr, pivotIdx+1, endIdx, k);
}
int main(){
    // int arr[] = {5,1,8,2,7,6,3,4,78,-8};
    int arr[] = {3,2,3,1,2,4,5,5,6,7,7,8,2,3,1,1,1,10,11,5,6,2,4,7,8,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 20;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<quickSelect(arr,0,n-1,n-k+1);
    return 0;
}