#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n>=0)
    {
        cout << "You entered a positive number" << endl;
    }
    else{
        cout << "You entered a negative number" << endl;
    }
    
    return 0;
}