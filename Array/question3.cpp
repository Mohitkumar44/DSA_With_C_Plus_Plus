#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,5,8,2,3,2,1,7,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int repeat=0;
        for (int j =0; j < n; j++)
        {
            if (arr[i]==arr[j]&&i!=j)
            {
                repeat = 1;
            }
            
        }
        if (!repeat)
        {
            cout << arr[i] << " ";
        }
        
    }
    
    return 0;
}