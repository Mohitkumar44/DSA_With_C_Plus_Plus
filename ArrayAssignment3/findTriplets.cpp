#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    int count = 0;
    cout<<"Enter the value of X : ";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if((arr[i]+arr[j]+arr[k])==x){
                    count++;
                }
            }
            
        }
        
    }
    cout<<count;
    return 0;
}