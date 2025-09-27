#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no. of students : ";
    cin>>n;
    int marks[n];
    cout<<"Enter marks of students : ";
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
        
    }
    cout<<"index of numbers which are less than 35 :"<<endl;
    for (int i = 0; i < n; i++)
    {
        if (marks[i]<35)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}