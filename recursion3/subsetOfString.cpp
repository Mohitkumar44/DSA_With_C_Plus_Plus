#include<iostream>
#include<vector>
using namespace std;
// void printSubset(string sub, string str){
//     if(str.size()==0){
//         cout<<sub<<endl;
//         return;
//     }
//     printSubset(sub,str.substr(1));
//     printSubset(sub+str[0],str.substr(1));

// }

// void printSubset(string sub, string str, vector<string>& v){
//     if(str.size()==0){
//         v.push_back(sub);
//         return;
//     }
//     printSubset(sub,str.substr(1),v);
//     printSubset(sub+str[0],str.substr(1),v);

// }

void printSubset(string sub, string str, int i, vector<string>& v){
    if(str.size()==i){
        v.push_back(sub);
        return;
    }
    printSubset(sub,str,i+1,v);
    printSubset(sub+str[i],str,i+1,v);

}

int main(){
    string str = "abc";
    vector<string> v;
    // printSubset("",str);
    printSubset("",str, 0, v);
    for(string ele : v){
        cout<<ele<<endl;
    }
    return 0;
}