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
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        v1.push_back(stoi(v[i]));
    }
    int idx = 0;
    int max = v1[0];
    for (int i = 1; i < n; i++)
    {
        if (max<v1[i])
        {
            idx = i;
            max = v1[i];
        }
        
    }

    cout<<"Max number's index : "<<idx<<endl;
    
    return 0;
}