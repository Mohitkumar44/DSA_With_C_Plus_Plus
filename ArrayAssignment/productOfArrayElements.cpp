// Q1. Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        product*=arr[i];
    }
    cout<<"Product of all elements of the array : "<<endl<<product;
    return 0;
}