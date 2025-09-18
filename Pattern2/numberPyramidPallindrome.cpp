#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) // for spaces
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // for stars
        {
            cout <<j;
        }
        // for (int j = 1; j < i; j++)
        // {
        //     cout<<i-j;
        // }
        for (int j = i-1; j >= 1; j--)
        {
            cout<<j;
        }
        
        cout << endl; // for next line
    }
    return 0;
}