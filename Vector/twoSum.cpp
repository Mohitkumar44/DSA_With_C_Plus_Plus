#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    int target;
    cout<<"Enter the target : ";
    cin>>target;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (v[i]+v[j]==target)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
            
        }
        
    }
    
    return 0;
}