// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2

#include<iostream>
using namespace std;
int main(){
    int a[] = {0,0,0,0,1,1};
    int n = 6;
    int lo = 0, hi = n-1;
    int idx = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(a[mid]==1){
            idx = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    if(idx==-1) cout<<0;
    else cout<<n-idx;
    return 0;
}