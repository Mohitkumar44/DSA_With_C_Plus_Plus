#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter m : ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
     
    return 0;
}