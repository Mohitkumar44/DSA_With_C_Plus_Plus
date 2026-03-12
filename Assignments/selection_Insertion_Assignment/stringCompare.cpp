#include<iostream>
using namespace std;
int main(){
    string s = "aycd";
    string t = "aecd";
    int flag = s.compare(t);
    if (flag==0)
    {
        cout<<"Strings are same";
    }
    else{
        cout<<"Strings are not same";
    }
    
    return 0;
}