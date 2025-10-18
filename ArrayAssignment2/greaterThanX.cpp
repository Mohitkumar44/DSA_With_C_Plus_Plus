#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,2,6,7,2,4,5,6,9,7,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0,x=4;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {
            count++;
        }
        
    }
    cout<<count;
    return 0;
}