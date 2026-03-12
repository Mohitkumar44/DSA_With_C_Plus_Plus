// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort 
// and display the sorted array.


#include<iostream>
using namespace std;
int main(){
    char arr[] = "mohit";
    int n = 5;

    for (int i = 0; i < n-1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag) break;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
    return 0;
}