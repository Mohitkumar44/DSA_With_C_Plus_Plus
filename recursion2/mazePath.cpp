#include<iostream>
using namespace std;
int maze(int m, int n){
    if(m==1||n==1) return 1;
    return maze(m-1,n) + maze(m,n-1);
}
void printPath(int m, int n,string s){
    if(m<1||n<1){
        return;
    }
    if(m==1&&n==1){
        cout<<s<<endl;
        return;
    }
    printPath(m-1,n,s+"R");
    printPath(m,n-1,s+"D");
}
int main(){
    // cout<<maze(3,3);
    printPath(3,3,"");
    return 0;
}