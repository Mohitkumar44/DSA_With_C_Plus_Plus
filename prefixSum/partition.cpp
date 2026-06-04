#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,3,7,1,7,8,3,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i < n; i++){
        arr[i] += arr[i-1];
    }
    int idx = -1;
    for(int i = 0; i < n; i++){
        if(2*arr[i]==arr[n-1]) {
            idx = i;
            break;
        }
    }
    if(idx!=-1){
        cout<<"yes, it can be partitioned at index : "<<idx;
    } 
    else cout<<"cannot be partitioned";
    return 0;
}