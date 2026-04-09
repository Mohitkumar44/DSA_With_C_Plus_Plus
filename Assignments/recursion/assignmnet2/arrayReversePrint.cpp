// Print all the elements of an array in reverse order.
#include<iostream>
using namespace std;

void printReverse(int arr[], int n){
    if(n<0) return;
    cout<<arr[n]<<" ";
    printReverse(arr,n-1);
}

int main(){
    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    printReverse(arr,n-1);
    return 0;
}