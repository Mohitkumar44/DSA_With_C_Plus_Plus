#include<iostream>
using namespace std; 
int main(){
    int n,max=INT8_MIN,sMax=INT8_MIN;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>sMax&&arr[i]!=max)     
        {
            sMax=arr[i];
        }
        
    }
    cout<<"Second Max Element is : "<<sMax;
    
    return 0;
}