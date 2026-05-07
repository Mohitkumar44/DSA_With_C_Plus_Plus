#include<iostream>
#include<vector>

using namespace std;
// string sub(string str, int i){
//     int n = str.size();
//     string ans = "";
//     for(int j = 0; j < n; j++){
//         if(j==i) continue;
//         ans+=str[j];
//     }
//     return ans;
// }
void permutation(string ans, string str, vector<string>& v){
    if(str.size()==0){
        v.push_back(ans);
        return;
    }
    int n = str.size();
    for(int i = 0; i < n; i++){
        // string newstr = sub(str,i);
        // permutation(ans+str[i], newstr, v);
        
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutation(ans+str[i], left+right, v);
    }
}
int main(){
    string str = "abcd";
    vector<string> v;
    permutation("", str, v);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}