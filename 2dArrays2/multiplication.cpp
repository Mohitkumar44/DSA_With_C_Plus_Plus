#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter dimensions of first matrix : ";
    cin>>r1>>c1;
    cout<<"Enter dimensions of second matrix : ";
    cin>>r2>>c2;
    if (c1!=r2)
    {
        cout<<"Matrix are not valid to multiply";
        return 0;
    }
    
    int a[r1][c1];
    cout<<"Enter first matrix elements : "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int b[r2][c2];
    cout<<"Enter second matrix elements : "<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>b[i][j];
        }
        
    }
    int c[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < r2; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}