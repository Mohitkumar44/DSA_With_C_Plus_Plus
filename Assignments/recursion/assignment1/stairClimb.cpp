// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 steps at each level
#include<iostream>
using namespace std;
int stair(int n){
    if(n<0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int stair2(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return stair2(n-1) + stair2(n-2) + stair2(n-3);
}
int main(){
    cout<<stair2(5);
    return 0;
}