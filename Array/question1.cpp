#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,52,53,34,52,45,35,2},sum=0,product=1;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout << "Sum = " << sum << "\n" << "Product = " << product << "\n";
    return 0;
}