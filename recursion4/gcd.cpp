#include<iostream>
#include<vector>
using namespace std;
int gcd(int n1, int n2){
    if(n2%n1==0) return n1;
    else return gcd(n2%n1, n1);
}
// int gcd(int n1, int n2, int d){
//     if(n1%d==0 && n2%d==0) return d;
//     else return gcd(n1, n2, d-1);
// }
int main(){
    int n1,n2;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    return 0;
}