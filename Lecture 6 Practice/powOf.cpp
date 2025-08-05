#include<iostream>
using namespace std;
void checkLoop(int x){
    int flag = 1;
    while (x!=1)
    {
        int rem = x%2;
        if (rem==1)
        {
            flag = 0;
        }
        x/=2;
    }
    if (flag)
    {
        cout << "True" <<endl;
    }else{
        cout << "False" <<endl;
    }
}
void checkBit(int x){
    if ((x > 0) && ((x & (x - 1)) == 0)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}
int main(){
    int x = 512;
    // checkLoop(x);
    checkBit(x);
    return 0;
}