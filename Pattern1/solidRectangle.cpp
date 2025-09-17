#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no. of rows and columns : ";
    cin>>r>>c;
    for (int i = 1; i <= r; i++)
    {
        for (int i = 1; i <= c; i++)
        {
            cout<<"*";
        }
        cout<<endl;        
    }
    
    return 0;
}