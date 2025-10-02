#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
void reverseVector(int i,int j,vector<int>& v){
    while (i<j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter vector elements : ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int k;  // for number of rotations.
    cout<<"Enter how much you want to rotate the vector : ";
    cin>>k;
    k=k%n;
    reverseVector(0,n-k-1,v);
    reverseVector(n-k,n-1,v);
    reverseVector(0,n-1,v);
    display(v);
    return 0;
}