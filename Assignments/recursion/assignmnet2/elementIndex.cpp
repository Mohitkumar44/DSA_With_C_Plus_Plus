// Print index of a given element in an array. If not present, print -1.
#include<iostream>
using namespace std;

void find(int arr[], int n, int target){
    if(n<0){
        cout<<"-1";
        return;
    } 
    if(arr[n]==target){
        cout<<n;
        return;
    }
    find(arr,n-1, target);
}

int main(){
    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int target = 10;
    find(arr,n-1,target);
    return 0;
}