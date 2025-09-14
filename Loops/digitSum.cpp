#include <iostream>
using namespace std;
int main(){
    int n,lastDigit,sum=0;
    cout<<"Enter no : ";
    cin>>n;
    while(n>0){
        lastDigit = n%10;
        sum+=lastDigit;
        n/=10;
    }
    cout<<"Sum of digit : "<<sum;
    return 0;
}