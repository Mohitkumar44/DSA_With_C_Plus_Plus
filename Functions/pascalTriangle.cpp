#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i = 2; i <= x; i++)
    {
        f*=i;
    }
    return f;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n,int r){
    int ncr = fact(n)/fact(n-r);
    return ncr;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    n--;
    for (int i = 0; i <= n; i++)
    {
        //for spaces
        for (int j = 1; j <= 2*n-i; j++)
        {
            cout<<" ";   
        }
        // pascal triangle
        for (int j = 0; j <= i; j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}