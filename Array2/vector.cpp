#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;   //there is no need to mention capacity of the vector.
    v.push_back(8);
    cout<<v.capacity()<<endl; 
    // cout<<v.size()<<endl; 
    v.push_back(4);
    cout<<v.capacity()<<endl; 
    // cout<<v.size()<<endl; 
    v.push_back(2);
    cout<<v.capacity()<<endl; 
    // cout<<v.size()<<endl; 
    v.push_back(7);
    cout<<v.capacity()<<endl; 
    // cout<<v.size()<<endl; 

    // v.push_back(82);
    // v[1]=8;     // this line can only modify the value.

    // cout<<v[0];
    // cout<<v[1];

    return 0;
}