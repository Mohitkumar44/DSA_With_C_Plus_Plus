#include<iostream>
using namespace std;
// int towerOfHanoi(int n){
//     if(n==1) return 1;
//     if(n==2) return 3;
//     return 1 + 2*towerOfHanoi(n-1);
// }

void towerOfHanoi(int n, char s, char h, char d){
    if (n==0) return;
    towerOfHanoi(n-1,s,d,h);
    cout<<s<<" --> "<<d<<endl;
    towerOfHanoi(n-1,h,s,d);
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    towerOfHanoi(n,'A','B','C');
    return 0;
}