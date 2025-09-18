#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++) // for spaces
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= 2*i-1; j++) // for stars
    //     {
    //         cout << "*";
    //     }
    //     cout << endl; // for next line
    // }
    int nsp=n-1;
    int nst=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) // for spaces
        {
            cout << " ";
        }
        nsp--;
        for (int j = 1; j <= nst; j++) // for stars
        {
            cout << "*";
        }
        nst+=2;
        cout << endl; // for next line
    }

    return 0;
}