#include<iostream>
using namespace std;
int main(){
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int target = 16;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;    
        if(arr[mid]==target){
           cout<<arr[mid-1]; 
           return 0;
        } 
        else if(arr[mid]>target) hi = mid-1;
        else lo = mid+1;
    }
    cout<<arr[hi];
    return 0;
}