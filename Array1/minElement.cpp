#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int n,min=INT8_MAX;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    cout<<"Min : "<<min;
    
    return 0;
}