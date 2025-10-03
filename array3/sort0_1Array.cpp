#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void normalSort(vector<int>& v){
    int zeros=0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==0)
        {
            zeros++;
        }
        
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i<zeros)
        {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
        
    }
    
}
void megaSort(vector<int>& v){       //problem in this function.
    int k=0,i=0,j=v.size()-1;
    while(i<j){
        if (v[k]==0)
        {
            v[i]=0;
            i++;
            k++;
        }
        else{
            v[j]=1;
            j--;
            k++;
        }
    }    
}
void megaSortSwap(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        if (v[i]==1&&v[j]==0)
        {
            // int temp=v[i];
            // v[i]=v[j];
            // v[j]=temp;
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
        else if (v[i]!=1)
        {
            i++;
        }
        
        else{
            j--;
        }
    }    
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    display(v);
    // normalSort(v);
    // megaSort(v);
    megaSortSwap(v);
    display(v);
    return 0;
}