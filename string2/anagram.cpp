#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool anagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)   
    {
        return true;
    }
    return false;
}
int main(){
    string s = "physicsWallah";
    string t = "Wallahphysics";
    bool b = anagram(s,t);
    cout<<b<<endl;
    return 0;
}