#include <iostream>
using namespace std;
int main()
{
    // int n = 4;
    // cout << "Enter the value of n : ";
    // cin >> n;
    
    // for (int i = 0; i < n; i++)
    // {
        //     for (int j = 1; j <= n-i-1; j++)
        //     {
            //         cout << " ";
            //     }
            //     for (int j = 1; j <= i+1; j++)
            //     {
                //         cout << j;
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
        //         cout << j;
        //     }
        
        //     cout << endl;
        // }
        
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        // star
        cout << "*";

        for (int j = 0; j < 2*i-1; j++)
        {
            cout << " ";
        }

        // star
        if(i!=0){

            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        // space
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        // star
        cout << "*";

        for (int j = 0; j < 2*n-2*i-5; j++)
        {
            cout << " ";
        }

        // star
        if(i!=n-2){

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}