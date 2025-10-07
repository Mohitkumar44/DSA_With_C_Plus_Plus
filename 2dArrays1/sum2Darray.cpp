#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"Enter Dimensions of 2D array : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter array elements : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    // calculating the sum.
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=arr[i][j];            
        }        
    }
    
    cout<<"sum is : "<<sum;

    return 0;
}