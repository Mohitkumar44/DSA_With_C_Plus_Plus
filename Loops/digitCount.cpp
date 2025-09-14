#include <iostream>
using namespace std;
int main(){
    int n,digit=0;
    cout << "Enter a number : ";
    cin >> n;
    int a=n;
    while(n>0){
        n/=10;
        digit++;
    }
    if (a==0) cout<<"no. of digits : 1"<<endl;
    else cout<<"no. of digits : "<<digit;
    return 0;
}