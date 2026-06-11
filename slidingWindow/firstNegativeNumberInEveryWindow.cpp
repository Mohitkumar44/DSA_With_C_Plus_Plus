#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k = 2;

    // // brute force approach to find first negative number of each window.
    // for(int i = 0; i <= n-k; i++){
    //     for(int j = i; j < i+k; j++){
    //         if(arr[j]<0){
    //             v.push_back(arr[j]);
    //             break;
    //         }
    //     }``
    // }
    
    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // }

    // optimal approach.
    int ans[n-k+1];
    int p = -1;
    for(int i = 0; i < k; i++){
        if(arr[i] < 0){
           p = i;
           break; 
        }
    }
    if(p==-1) ans[0] = 1; 
    else ans[0] = arr[p];
    // sliding window.
    int i = 1, j = k;
    while(j < n){
        if(p>=i) ans[i] = arr[p];
        else{
            p = -1;
            for(int r = i; r < i+k; r++){
                if(arr[r]<0){
                    p = r;
                    break;
                }
            }
            if(p!=-1) ans[i] = arr[p];
            else ans[i] = 1;
        }
        i++;
        j++;
    }

    for(int i = 0; i < n-k+1; i++) cout<<ans[i]<<" ";

    return 0;
}