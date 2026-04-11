#include<iostream>
using namespace std;
int towerOfHanoi(int n){
    if(n==1) return 1;
    if(n==2) return 3;
    return 1 + 2*towerOfHanoi(n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<towerOfHanoi(n);
    return 0;
}