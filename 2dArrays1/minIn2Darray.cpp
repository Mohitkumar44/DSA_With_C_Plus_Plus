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
    
    int min = arr[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]<min)
            {
                min=arr[i][j];
            }
            
        }
        
    }
    
    cout<<"Greatest is : "<<min;

    return 0;
}