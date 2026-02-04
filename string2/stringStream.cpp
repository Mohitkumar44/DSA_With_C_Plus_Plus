#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}