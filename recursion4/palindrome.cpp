#include<iostream>
#include<vector>
using namespace std;
bool palindrome(string s, int idx, int n){
    if(idx>=n) return true;
    if(s[idx]!=s[n]){
        return false;
    }
    return palindrome(s, idx+1, n-1);
}
bool isPalindrome(string s){
    int i = 0, j = s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s = "mohitihom";
    int n = s.size()-1;
    // cout<<isPalindrome(s);
    cout<<palindrome(s,0,n);
    return 0;
}