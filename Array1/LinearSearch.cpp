#include<iostream>
using namespace std; 
int main(){
    int n,x;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    cout<<"Enter no. to search : ";
    cin>>x;
    bool flag=0;
    for (int i = 0; i < n; i++)
    {
        if(x==arr[i]){
            flag=1;            
            break;
        }
    }
    
    if (flag)
    {
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    
    return 0;
}