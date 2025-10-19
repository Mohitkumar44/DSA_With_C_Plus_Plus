#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,3,4,6,8,62};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even=0,odd=0;
    int diff;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
        
    }
    if (even>=odd)
    {
        diff = even-odd;
    }
    else{
        diff  = odd - even;
    }
    cout<<diff;
    return 0;
}