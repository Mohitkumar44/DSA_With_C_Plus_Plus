#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n][n];
    int ri=0,rl=n,ci=0,cl=n;
    while (ri<rl&&ci<cl)
    {
        for (int j = ci; j < cl; j++)
        {
            cin>>arr[ri][j];
        }
        if (ri>=rl&&ci>=cl)
        {
            break;
        }
        
        ri++;
        for (int i = ri; i < rl; i++)
        {
            cin>>arr[i][cl-1];            
        }
        if (ri>=rl&&ci>=cl)
        {
            break;
        }
        cl--;
        for (int j = cl-1; j >= ci; j--)
        {
            cin>>arr[rl-1][j];
        }
        if (ri>=rl&&ci>=cl)
        {
            break;
        }
        rl--;
        for (int i = rl-1; i >= ri; i--)
        {
            cin>>arr[i][ci];            
        }
        ci++;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}