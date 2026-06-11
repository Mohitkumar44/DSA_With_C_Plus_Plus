#include<iostream>
using namespace std;
int maximumPower(int n){
    int count = 0;
    int prev = n;
    while(n>0){
        count++;
        prev = n;
        n = n & (n-1);
    }
    return prev;
}
int main(){
    int n = 139;
    cout<<maximumPower(n)<<endl;
}