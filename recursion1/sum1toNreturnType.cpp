#include<iostream>
using namespace std;
int sum1toN(int n){
    if(n==1) return n; 
    if(n<=0) return 0; 
    return n + sum1toN(n-1);
    
}
int sum(int n){
    return (n*(n+1))/2;
    
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<sum1toN(n)<<endl;
    cout<<sum(n);
    return 0;
}