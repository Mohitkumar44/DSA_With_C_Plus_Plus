// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of 
// two numbers formed from digits of the array. Please note that all digits of the given array must be 
// used to form the two numbers.

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};

    int n = 10;
    sort(arr,arr+n);
    int n1 = 0;
    int n2 = 0;

    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            n1 = n1*10 + arr[i];
        }
        else{
            n2 = n2*10 + arr[i];
        }
    }
    cout<<n1<<" "<<n2<<endl;
    return 0;
}