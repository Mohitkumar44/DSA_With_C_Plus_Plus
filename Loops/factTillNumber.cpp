#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    // // by nested loop
    // for (int i = 1; i <= n; i++)
    // {
    //     int fact=1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         fact*=j;
    //     }
    //     cout<<"Factorial of "<<i<<" : "<<fact<<endl;
    // }
    
    // without nested loop
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
        cout<<"Factorial of "<<i<<" is : "<<fact<<endl;
    }
    
    return 0;
}