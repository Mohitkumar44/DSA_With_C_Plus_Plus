#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(3);
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    return 0;
}