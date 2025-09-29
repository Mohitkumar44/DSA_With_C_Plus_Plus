// Q2. Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,max=INT8_MIN,max2=INT8_MIN;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
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
        if (arr[i]>max2&&arr[i]!=max)
        {
            max2 = arr[i];
        }
        
    }
    if (max2==INT8_MIN)
    {
        cout<<"second largest element does not exist";
    }
    else{

        cout<<"Second Max will be : "<<max2;
    }
    
    return 0;
}