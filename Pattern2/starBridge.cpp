#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    // for first line
    for (int i = 0; i < 2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
    for (int i = 1; i <= n; i++)
    {
        //for stars
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        //for spaces
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<" ";
        }
        //for stars
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}