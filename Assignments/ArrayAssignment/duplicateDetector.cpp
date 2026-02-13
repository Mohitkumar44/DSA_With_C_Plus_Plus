// Q4. Given an array, predict if the array contains duplicates or not.
// Q2. Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    bool flag=false;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                flag=true;
            }
            
        }
        
    }
    if (flag)
    {
        cout<<"Duplicate Exist";
    }
    else{
        cout<<"There is not duplicate";
    }
    
    return 0;
}