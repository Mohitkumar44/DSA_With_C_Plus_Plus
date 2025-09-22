#include<iostream>
int fact(int n){
    // if (n==1)
    // {
    //     return 1;
    // }
    // else{
    //     return n*fact(n-1);
    // }
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
    
}
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        // cout<<fact(i)<<endl; 
        fact*=i;
        cout<<fact<<endl;
    }
    
    return 0;
}