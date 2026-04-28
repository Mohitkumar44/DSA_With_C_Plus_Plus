#include<iostream>
using namespace std;
void skip(string res, string str, char ch, int idx){
    if(idx==str.size()){
        cout<<res;
        return;
    }
    if(str[idx]==ch) skip(res,str,ch,idx+1);
    else{
        res += str[idx];
        skip(res,str,ch,idx+1);
    }
}
// void skip(string res, string str, char ch){
//     if(str.size()==0){
//         cout<<res;
//         return;
//     }
//     if(str[0]!=ch) res += str[0];
//     str = str.substr(1);
//     skip(res,str,ch);
    
// }
int main(){
    string str = "raghav garg";
    // int n = sizeof(str)/sizeof(str[0]);
    string res = "";
    char ch = 'a';
    skip(res,str,ch,0);
    // skip(res,str,ch);
    return 0;
}