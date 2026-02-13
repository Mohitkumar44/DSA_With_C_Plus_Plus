#include <iostream>
using namespace std;
void printArray(int arr[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    printArray(arr);

    cout<<endl;

    for (int j = 0; j < 4; j++)
    {
        if (j%2==0)
        {
            for (int i = 4-1; i >= 0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for (int i = 0; i < 4; i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
}