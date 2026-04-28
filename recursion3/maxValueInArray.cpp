#include<iostream>
#include<climits>
using namespace std;
void mx(int arr[], int n, int maxValue){
    if(n<0){
        cout<<maxValue;
        return;
    } 
    if(maxValue<arr[n]) maxValue = arr[n];
    mx(arr, n-1, maxValue);
    
}
// int mxVal(int arr[], int n, int maxValue){
//     if(n<0){
//         return maxValue;
//     } 
//     if(maxValue<arr[n]) maxValue = arr[n];
//     mxVal(arr, n-1, maxValue);
    
// }
int mxVal(int arr[], int n){
    if(n<0) return arr[0];
    return max(arr[n],mxVal(arr,n-1));
    
}
int main(){
    int arr[] = {5,4,2,6,1,2,3,5,7,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    mx(arr,n-1,INT_MIN);
    cout<<endl;
    // int largest = mxVal(arr,n-1,INT_MIN);
    int largest = mxVal(arr,n-1);
    cout<<largest;
    return 0;
}