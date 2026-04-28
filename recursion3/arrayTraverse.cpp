#include<iostream> 
#include<vector>
using namespace std;
// void traverse(int arr[], int n){
//     if(n<0) return;
//     traverse(arr,n-1);
//     cout<<arr[n];
// }
void traverse2(vector<int>& v, int n){
    if(n==-1) return;
    traverse2(v,n-1);
    cout<<v[n];
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i =0; i < n; i++){
        v[i] = arr[i];
    }
    // traverse(arr,n-1);
    traverse2(v,n-1);
    return 0;
}