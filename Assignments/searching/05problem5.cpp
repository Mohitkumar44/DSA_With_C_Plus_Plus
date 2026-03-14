// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
// Output 2: no


#include<iostream>
using namespace std;
int main(){
    int n = 197;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if (mid*mid==n)
        {
            flag = true;
            break;
        }
        else if(mid*mid>n){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
        
    }
    if(flag) cout<<"yes";
    else cout<<"false";
    return 0;
}