#include<iostream>
using namespace std;
int main(){
    // int arr[]={2,3,4,62,2,6,8};
    int arr[]={2,2,3,4,6,8,62};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            flag = false;
            break;
        }
        
    }
    if(flag){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}