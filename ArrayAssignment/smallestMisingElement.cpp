#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    cout<<"Enter elements : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x=1;
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if (x!=arr[i])
        {
            flag = true;
            break;
        }
        x++;
    }
    if (flag)
    {
        cout<<x<<" is missing from the array"<<endl;
    }
    else{
        cout<<"All are present";
    }
    
    
    return 0;
}