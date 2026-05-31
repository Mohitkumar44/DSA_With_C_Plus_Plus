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
    while(i<idx && j>idx){
        if(arr[i]>arr[idx] && arr[j]<arr[idx]){
            swap(arr[i], arr[j]);
        }
        else if(arr[i]>arr[idx]) j--;
        else if(arr[j]<arr[idx]) i++;
        else{
            i++;
            j--;

        }
    }
    return idx;
}
// int partition(int arr[], int startIdx, int endIdx){
//     int n = arr[startIdx];
//     int idx = startIdx;
//     for(int i = startIdx+1; i <= endIdx; i++){
//         if(arr[i]<=n) idx++;
//     }
//     // swap
//     swap(arr[startIdx], arr[idx]);
//     int i = startIdx, j = endIdx;
//     while(i<idx && j>idx){
//         if(arr[i]>arr[idx] && arr[j]<arr[idx]){
//             swap(arr[i], arr[j]);
//         }
//         else if(arr[i]>arr[idx]) j--;
//         else if(arr[j]<arr[idx]) i++;
//         else{
//             i++;
//             j--;

//         }
//     }
//     return idx;
// }
void quickSort(int arr[], int startIdx, int endIdx){
    if(startIdx>=endIdx) return;
    int pivotIdx = partition(arr, startIdx, endIdx);
    quickSort(arr, startIdx, pivotIdx-1);
    quickSort(arr, pivotIdx+1, endIdx);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4,78,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}