#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    // first matrix.
    cout<<"Enter Dimensions of first matrix : ";
    cin>>r1>>c1;
    cout<<"Enter Dimensions of second matrix : ";
    cin>>r2>>c2;
    if (r1!=r2&&c1!=c2)
    {
        cout<<"Addition Not Possible";
        return 0;
    }
    int m1[r1][c1];
    cout<<"Enter Matrix 1 elements : "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>m1[i][j];
        }
    }
    // second matrix.
    int m2[r2][c2];
    cout<<"Enter Matrix 2 elements : "<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>m2[i][j];
        }
    }
    // third matrix.
    int m3[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            m3[i][j] = m1[i][j]+m2[i][j];
        }
    }
    cout<<"Resultant Matrix : "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}