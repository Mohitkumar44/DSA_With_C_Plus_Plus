// Given a positive integer, return true if it is a power of 2.
#include<iostream>
using namespace std;
bool checkPower(int n){
    if(n==1) return true;
    if(n%2) return false;
    else return checkPower(n/2); 
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(checkPower(n)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
    return 0;
}