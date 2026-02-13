#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int arr[n][n] = {{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                cout<<arr[i][j]<<" ";
            }
            else if (i+j==n-1)
            {
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;        
    }
    
    return 0;
}