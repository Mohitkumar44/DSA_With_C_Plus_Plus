#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    vector<vector<int>> v;   //2d vector
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp; //temp vector
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                temp.push_back(1);
            }
            else
            {
                temp.push_back(v[i-1][j]+v[i-1][j-1]);
            }
        }
        v.push_back(temp);
    }

    // printing 2d vector as a pascal triangle.
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        // for values of 2d vector
        for (int j = 0; j < i+1; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}