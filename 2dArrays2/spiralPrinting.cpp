#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter dimensions of Matrix : ";
    cin >> m >> n;

    int arr[m][n];
    cout << "Enter matrix elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // int m = 4, n = 5;

    // int arr[m][n] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    int minr = 0, maxr = m - 1, minc = 0, maxc = n - 1;
    int tne = m * n;
    int count = 0;
    while (minr <= maxr && minc <= maxc)
    {

        for (int j = minc; j <= maxc && count < tne; j++, count++)
        {
            cout << arr[minr][j] << " ";
        }
        minr++;

        for (int i = minr; i <= maxr && count < tne; i++, count++)
        {
            cout << arr[i][maxc] << " ";
        }
        maxc--;

        for (int j = maxc; j >= minc && count < tne; j--, count++)
        {
            cout << arr[maxr][j] << " ";
        }
        maxr--;

        for (int i = maxr; i >= minr && count < tne; i--, count++)
        {
            cout << arr[i][minc] << " ";
        }
        minc++;
    }
}