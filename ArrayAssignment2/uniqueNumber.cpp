#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,6,5,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n-1; i++)
    {
        bool check = true;
        for (int j =0; j < n; j++)
        {
            if (i!=j && arr[i]==arr[j])
            {
                check = false;
                break;
            }
            
        }
        if (check)
        {
            cout<<arr[i]<<" is unique"<<endl;
        }
    }
    
    return 0;
}