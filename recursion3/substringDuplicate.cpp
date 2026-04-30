#include<iostream>
#include<vector>
using namespace std;
void storeSubstring(string s, string ans, vector<string>& v, bool flag){
    if(s==""){
        v.push_back(ans);
        return;
    }
    if(s.size()>1 && s[0]==s[1]) flag = false;
    char ch = s[0];
    if(flag) storeSubstring(s.substr(1), ans, v, true);
    storeSubstring(s.substr(1), ans+ch, v, true);

}
int main(){
    string s = "aab";
    vector<string> v;
    storeSubstring(s, "", v, true);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}