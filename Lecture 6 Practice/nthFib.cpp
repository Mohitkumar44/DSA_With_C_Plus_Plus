#include<iostream>
using namespace std;
int nthFib(int num){
    if (num==0)
    {
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        return nthFib(num-1)+nthFib(num-2);
    }
    
}
int main(){
    int num;
    cout << "Enter number : ";
    cin >> num;
    cout << nthFib(num);
    return 0;
}