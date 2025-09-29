// Q3. Find the minimum value out of all elements in the array.// Q2. Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,mini=INT8_MAX;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mini = min(mini,arr[i]);
    }
    cout<<"Minimum Element in the array will be : "<<mini;
    
    return 0;
}