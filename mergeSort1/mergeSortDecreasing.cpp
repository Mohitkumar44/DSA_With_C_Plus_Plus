#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i = 0, j = 0, k = 0;
    while(i<a.size() && j < b.size()){
        if(a[i]<=b[j]){
            res[k++] = b[j++];
        }
        else{
            res[k++] = a[i++];
        }
    }
    if(a.size()==i){
        while(j < b.size()) res[k++] = b[j++];
    }
    if(b.size()==j){
        while(i < a.size()) res[k++] = a[i++];
    }
}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2, n2 = n - n/2;
    vector<int> a(n1), b(n2);
    for(int i = 0; i < n1; i++){
        a[i] = v[i];
    }
    for(int i = 0; i < n2; i++){
        b[i] = v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {1,2,6,3,7,8,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}