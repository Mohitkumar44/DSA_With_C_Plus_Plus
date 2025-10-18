#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,8,3,5,9,6,1,2,6};
    int l1=arr[0],l2=arr[0],l3=arr[0],n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>l1)
        {
            l1 = arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>l2&&arr[i]!=l1)
        {
            l2 = arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>l3&&arr[i]!=l1&&arr[i]!=l2)
        {
            l3 = arr[i];
        }
        
    }
    
    cout<<l1<<l2<<l3;
    return 0;
}