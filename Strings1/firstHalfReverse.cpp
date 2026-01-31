#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    reverse(str.begin(), str.begin() + str.length()/2);
    cout<<str;
    return 0;
}