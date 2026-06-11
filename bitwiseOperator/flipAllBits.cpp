#include<iostream>
using namespace std;
int allOnes(int n){
    n = n | ( n >> 1 );
    n = n | ( n >> 2 );
    n = n | ( n >> 4 );
    n = n | ( n >> 8 );
    return n;
}
int allOnes2(int n){
    int count = 0;
    int temp = n;
    while(n > 0){
        count++;
        temp = n;
        n = n & (n - 1);
    }
    return (temp << 1)-1;
}
int flip(int n){
    int ones = allOnes2(n);
    return n ^ ones;
}
int main(){
    int n = 156;
    int f = flip(n);
    cout<<f;
    return 0;
}