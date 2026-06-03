#include<iostream>
#include<vector>
using namespace std;
void cycleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int correctIdx = arr[i] - 1;
        if(i!=correctIdx){
           swap(arr[i] , arr[correctIdx]); 
           i--;
        } 
    }
}
int main(){
    int arr[] = {9,7,8,6,5,2,3,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cycleSort(arr,n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}