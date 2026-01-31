#include<iostream>
#include<string.h>

using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    string s = to_string(n);
    cout<<s.length();
    return 0;
}