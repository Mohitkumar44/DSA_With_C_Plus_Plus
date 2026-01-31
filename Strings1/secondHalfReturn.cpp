#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin, str);
    int len = str.length();
    string str2 = str.substr(len/2);
    cout<<str2;
    return 0;
}