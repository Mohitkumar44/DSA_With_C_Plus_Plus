#include<iostream>
using namespace std;
int pow(int a,  int b){
    if(b==1) return a;
    int ans = pow(a,b/2);
    if(b%2==0) return ans*ans;
    return ans*ans*a;
    
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;    
    cout<<pow(a,b);
    return 0;
}