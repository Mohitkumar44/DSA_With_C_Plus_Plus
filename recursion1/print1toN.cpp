#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1, n);
}
void printrec(int n){
    if(n==0) return;
    printrec(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    printrec(n);
    return 0;
}