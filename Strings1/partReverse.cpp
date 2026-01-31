#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    string str = "krishna";
    reverse(str.begin()+1,str.begin()+5);
    cout<<str;
    return 0;
}