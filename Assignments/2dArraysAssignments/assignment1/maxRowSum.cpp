#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter dimensions of the array : ";
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int maxRow = 0;
    for (int i = 0; i < m; i++)
    {
        int rowSum=0;
        for (int j = 0; j < n; j++)
        {
            rowSum += arr[i][j];
            
        }
        if (rowSum>=maxRow)
        {
            maxRow = i;
        }
        
    }
    cout<<maxRow;
    return 0;
}