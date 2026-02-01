#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin, str);
    int count = 0;
    int len = str.size();
    for(int i = 0; i < len; i++){
        if(len==1){
            break;
        }
        else if (len==2 && str[0]!=str[1])
        {
            count++;
            break;
        }
        
        if((i==0) && str[i]!=str[i+1]){
            count++;
        }
        else if((i == len - 1) && str[i]!=str[i-1]){
            count++;
        }
        else if(str[i-1]!=str[i] && str[i]!=str[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}