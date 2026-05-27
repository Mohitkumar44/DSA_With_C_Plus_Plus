#include<iostream>
#include<vector>
using namespace std;
void binaryString(int n, string s, vector<string>& v){
    if(n==0){
        v.push_back(s);
        return;
    }
    binaryString(n-1,s+'0', v);
    if(s.length()==0 || s[s.size()-1]!='1') binaryString(n-1,s+'1', v);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<string> v;
    binaryString(n,"",v);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}