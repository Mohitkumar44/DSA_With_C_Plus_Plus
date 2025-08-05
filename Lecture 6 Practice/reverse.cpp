#include<iostream>
using namespace std;
int main(){
    int x = 13452,reverse_num=0;
    while (x!=0)
    {
        int digit = x%10;
        reverse_num = reverse_num*10 + digit;
        x/=10;
    }
    cout << reverse_num << endl;
    return 0;
}