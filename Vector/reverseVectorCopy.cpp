#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int> rV(v.size());

    for (int i = 0; i < v.size(); i++)
    {
        // i + j = size - 1
        int j = v.size()-1-i;
        rV[i]=v[j];
        
    }
    display(rV);

    // for (int i = v.size()-1; i >= 0; i--)
    // {
    //     rV.push_back(v[i]);
    // }
    // for (int i = 0; i < rV.size(); i++)
    // {
    //     cout<<rV[i]<<" ";
    // }
    
    
    return 0;
}