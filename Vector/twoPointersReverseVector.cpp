#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void reversePart(int i,int j,vector<int>& v){
    while (i<j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        // swap(&v[i],&v[j]);
        i++;
        j--;    
    }
    
}
int main(){
    int n;
    cout<<"Enter no. of elements : ";
    cin>>n;

    vector<int> v;
    cout<<"Enter Vector Elements : ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    reversePart(1,3,v);


    // for (int i = 0,j=n-1; i < j; i++,j--)
    // {
    //     swap(&v[i],&v[j]);
    // }
    display(v);

    return 0;
}