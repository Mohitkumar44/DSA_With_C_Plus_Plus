#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool check = true;
    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        if (arr[i]!=arr[j])
        {
            check = false;
            break;
        }
        
    }
    if (check)
    {
        cout<<"Array is a palindrome";
    }
    else{
        cout<<"Array is not a palindrome";
    }
    
    return 0;
}