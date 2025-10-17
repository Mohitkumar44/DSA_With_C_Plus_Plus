#include<iostream>
using namespace std;
int main(){
    // int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int m,n;
    cout<<"Enter dimensions of the matrix : ";
    cin>>m>>n;

    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        if (i%2!=0)
        {
            for (int j = n-1; j >= 0; j--)
            {
                cout<<a[j][i]<<" ";
            }            
        }
        else{
            for (int j = 0; j < n; j++)
            {
                cout<<a[j][i]<<" ";
            }           
        }
    }

    return 0;
}