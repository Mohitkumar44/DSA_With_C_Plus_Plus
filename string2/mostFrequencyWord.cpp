#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s = "Raghav is a maths teacher. He is a DSA mentor as well.";
    string temp;
    stringstream ss(s);
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());

    int maxCount = 0;
    string ans = v[0];
    int count = 1;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]==v[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        maxCount = max(maxCount,count);
    }
    count = 1;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]==v[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count==maxCount){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }

    return 0;
}