#include<iostream>
using namespace std;
int triplets(int arr[],int n,int x){
    int count = 0;
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
    return count;
}
int main(){
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter the value of X : ";
    cin>>x;
    
    cout<<triplets(arr,n,x);
    return 0;
}