#include<iostream>
using namespace std; 
int main(){
    int n,x;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    cout<<"Enter no. to compare : ";
    cin>>x;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(x<arr[i]){
            count++;   
        }
    }
    
    cout<<count;
    
    return 0;
}