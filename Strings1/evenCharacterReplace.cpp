#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    
    for(int i = 0; str[i]!='\0'; i++){
        if(i%2==0){
            str[i] = 'a';
        }
    }

    cout<<str;
    return 0;
}