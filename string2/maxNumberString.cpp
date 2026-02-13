#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    // vector<int> v1;
    // for (int i = 0; i < n; i++)
    // {
    //     v1.push_back(stoi(v[i]));
    // }
    int idx = 0;
    int max = stoi(v[0]);
    for (int i = 1; i < n; i++){
        if (max<stoi(v[i])){
            idx = i;
            max = stoi(v[i]);
        }
        
    }
    cout<<"Max number's index : "<<idx<<endl;
    cout<<"Max number is : "<<v[idx]<<endl;
    
    return 0;
}