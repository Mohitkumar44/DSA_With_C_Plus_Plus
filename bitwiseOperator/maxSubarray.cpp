#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {4,6,2,6,7,1,7,8,9,3,2,9,9,4,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    int count = 0;
    int maxEle = INT_MIN;
    for(int i = 0;i < n; i++){
        if(arr[i]>maxEle){
            maxEle = arr[i];
            count = 1;
        }
        else if(arr[i]==maxEle){
            count++;
        }
        ans = max(count, ans);
    }
    cout<<ans;
    return 0;
}