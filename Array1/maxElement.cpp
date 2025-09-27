#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int n,max=INT8_MIN;
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
    cout<<"Max : "<<max;
    
    return 0;
}