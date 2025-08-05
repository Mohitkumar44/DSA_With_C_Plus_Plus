#include<iostream>
using namespace std;
int binToDecimal(int a){
    int decimal = 0,pow = 1;
    while (a!=0)
    {
        int digit = a%10;
        decimal = decimal + digit*pow;
        a/=10;
        pow*=2;
    }
    return decimal;
}
int main(){
    int x=101010;
    cout << binToDecimal(x) << endl;
    return 0;
}