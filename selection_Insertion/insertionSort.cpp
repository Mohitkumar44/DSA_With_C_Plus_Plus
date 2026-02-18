#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {3,2,1,4,5};
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (arr[j]>=arr[j-1])
            {
                break;
            }
            else{
                swap(arr[j],arr[j-1]);
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}