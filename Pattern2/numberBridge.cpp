#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    // for first line
    for (int i = 1; i <= 2*n-1; i++)
    {
        cout<<i;
    }
    cout<<endl;
    
    for (int i = 1; i <= n; i++)
    {
        int k=1;
        //for numbers
        for (int j = 1; j <= n-i; j++)
        {
            cout<<k;
            k++;
        }
        //for spaces
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<" ";
            k++;
        }
        //for numbers
        for (int j = 1; j <= n-i; j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    
    return 0;
}