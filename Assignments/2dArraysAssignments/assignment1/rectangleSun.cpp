#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter dimensions of the matrix : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter elements of the matrix : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int l1,r1,l2,r2;
    cout<<"Enter first coordinate : ";
    cin>>l1>>r1;
    cout<<"Enter second coordinate : ";
    cin>>l2>>r2;
    int sum=0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum+=arr[i][j];
        }
        
    }
    
    cout<<sum;
    return 0;
}