#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2==0)
    //     {
    //         sum-=i;
    //     }
    //     else{
    //         sum+=i;
    //     }
        
    // }
    if(n%2==0) sum=-n/2;
    else sum=-n/2+n;
    cout<<"The sum of the series : "<<sum;
    return 0;
}