#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,6,8,9};
    int n = 8;
    // bool flag = true;
    // for(int i = 0; i < n; i++){
    //     if(arr[i]!=i){
    //         flag = false;
    //         cout<<"Missing no. is : "<<i<<endl;
    //         break;
    //     }
    // }
    // if(flag){
    //     cout<<"all are presenet";
    // }

    int lo = 0;
    int hi = n-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid==arr[mid]){
            lo = mid+1;
        }
        else if(mid!=arr[mid]){
            ans = mid;
            hi = mid-1;
        }
    }
    cout<<ans;

    return 0;
}