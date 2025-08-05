#include<iostream>
using namespace std;
int main(){
    int num,primeCheck=1;
    cout << "Enter a number : ";
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            primeCheck = 0;
            break;
        }
        
    }
    if (primeCheck)
    {
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Not a Prime Number" << endl;
    }
    
    return 0;
}