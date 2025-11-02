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
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    printArray(arr);

    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    printArray(arr);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0,k = 4-1; j < k; j++,k--)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
        
    }
    
    printArray(arr);
    return 0;
}