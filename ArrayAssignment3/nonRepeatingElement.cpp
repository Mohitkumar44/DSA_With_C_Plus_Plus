#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 5, 6, 1, 7, 3, 8, 1, 7, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==arr[j] && j!=i){
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout<<arr[i];
        }  
    }
    
    return 0;
}