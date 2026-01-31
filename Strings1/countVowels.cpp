#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cout<<"Value of n : ";
    cin>>n;
    char str[n];   // but it will consume the whole string rather than a string of size n.
    cin>>str;
    int count = 0;
    for(int i= 0; str[i]!='\0'; i++){
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            count++;
        }
        
    }
    cout<<"no. of vowels = "<<count<<endl;
    return 0;
}