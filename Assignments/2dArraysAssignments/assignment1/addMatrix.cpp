#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter dimensions of the matrix : ";
    cin>>m>>n;
    int arr1[m][n];
    int arr2[m][n];
    cout<<"Enter the elements of the first matrix : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr1[i][j];
        }
        
    }
    cout<<"Enter the elements of the second matrix : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    }

    cout<<"Resultant Matrix : "<<endl;
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}