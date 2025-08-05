#include<iostream>
using namespace std;
int decToBinary(int a){
    int Binary=0,pow = 1;
    while (a!=0)
    {
        int rem = a%2;
        Binary = Binary + rem*pow;
        a/=2;
        pow*=10;
    }
    
    return Binary;
}
int main(){
    int x = 512;
    cout << decToBinary(x) << endl;
    return 0;
}