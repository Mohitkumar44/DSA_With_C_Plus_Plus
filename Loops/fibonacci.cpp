#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,sum=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i = 3; i <= n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    if (n==1||n==2)
    {
        sum=1;
    }
    cout<<n<<"th term of the fibonacci series : "<<b;
    return 0;
}