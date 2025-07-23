#include<iostream>
using namespace std;
int main(){
    int n,isPrime = true;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 2; i*i < n; i++)
    {
        if (n%i==0)
        {
            isPrime = false;
        }
        
    }
    if (isPrime==true)
    {
        cout << "Prime No" << endl;
    }
    else{
        cout << "Not a Prime No" << endl;
    }
    
    return 0;
}