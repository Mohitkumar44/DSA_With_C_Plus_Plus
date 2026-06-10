#include<iostream>
using namespace std;
int count(int n){
    int digits = 0;
    while(n>0){
        if(n%2) digits++;
        n = n>>1;
    }
    return digits;
}
int no_of_set_bits(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n & (n-1);
    }
    return count;
}
int no_of_set_bits_built_in(int n){
    return __builtin_popcount(n);
}
int main(){
    int n = 6;
    cout<<count(n)<<endl;
    cout<<no_of_set_bits(n)<<endl;
    cout<<no_of_set_bits_built_in(n);
}