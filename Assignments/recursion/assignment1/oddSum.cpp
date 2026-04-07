// Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.

#include<iostream>
using namespace std;
int oddSum(int a, int b){
    if(a>b) return 0;
    if(a%2) return a + oddSum(a+1,b);
    else return oddSum(a+1,b);
}
int main(){
    int a,b;
    cout<<"enter a and b : ";
    cin>>a>>b;
    cout<<oddSum(a,b);
    return 0;
}