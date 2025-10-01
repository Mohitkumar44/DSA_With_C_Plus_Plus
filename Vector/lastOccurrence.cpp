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
    
    int x;
    cout<<"Enter the x : ";
    cin>>x;

    for (int i = v.size(); i >= 0; i--)
    {
        if (v[i]==x)
        {
            cout<<i;
            break;
        }
        
    }
    
    return 0;
}