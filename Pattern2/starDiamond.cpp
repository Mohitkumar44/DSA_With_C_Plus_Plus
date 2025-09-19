#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // int nsp=n-1;
    // int nst=1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= nsp; j++)
    //     {
    //         cout<<" ";
    //     }
    //     nsp--;
    //     for (int j = 1; j <= nst; j++)
    //     {
    //         cout<<"*";
    //     }
    //     nst+=2;
    //     cout<<endl;
    // }
    // int st=1;
    // for (int i = 1; i <= n-1; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 2*n-3; j >= st; j--)
    //     {
    //         cout<<"*";
    //     }
    //     st+=2;
    //     cout<<endl;
    // }
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        //spaces
        for (int j = 1; j <= nsp; j++) cout << " ";
        if (i < n) nsp--;
        else nsp++;
        //stars
        for (int j = 1; j <= nst; j++) cout << "*";
        if (i < n) nst += 2;
        else nst -= 2;
        cout << endl;
    }
    return 0;
}