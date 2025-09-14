#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    int reversedNo=0;
    int digit;
    while(n>0){
        digit=n%10;
        reversedNo=reversedNo*10+digit;
        n/=10;
    }
    cout<<"Reversed no. : "<<reversedNo;
    return 0;
}