#include<iostream>
using namespace std;
int main(){
    int arr1[2][3]={{1,2,3},{4,5,6}}; 
    int arr2[3][2]; 
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}