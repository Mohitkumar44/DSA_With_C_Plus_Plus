#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,52,53,34,52,45,35,2};
    int* max=&arr[0],*min=&arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (*max<=arr[i])
        {
            max = &arr[i];
        }
        if (*min>=arr[i])
        {
            min = &arr[i];
        }
        
    }
    int temp;
    temp = *max;
    *max = *min;
    *min = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}