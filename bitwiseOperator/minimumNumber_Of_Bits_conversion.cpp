#include<iostream>
using namespace std;
int number_of_bits_2(int a, int b){
    return __builtin_popcount(a^b);
}
int number_of_bits(int a, int b){
    int temp = a^b;
    int count = 0;
    while(temp > 0){
        count++;
        temp = temp & (temp - 1);
    }
    return count;
}
int main(){
    int a = 5;
    int b = 11;
    cout<<number_of_bits_2(a,b)<<endl;
}