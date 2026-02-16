#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,4,6,3,2,1};

    // bubbleSort Optimized.
    for(int i = 1; i < 6; i++){
        bool flag = true;
        for (int j = 0; j < 6-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                // arr[j] = arr[j]+arr[j+1];
                // arr[j+1] = arr[j] - arr[j+1];
                // arr[j] = arr[j] - arr[j+1];
                swap(arr[j],arr[j+1]);
                flag = false;
            }
            
        }
        if (flag)
        {
            break;
        }
        
        
    }
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}