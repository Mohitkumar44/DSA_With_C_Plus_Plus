#include<iostream>
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout << "Enter n : ";
    cin >> n;
    while(i<=n){
        // if (i%2==0)
        if (i%2!=0)
        {
            sum+=i;
        }
        i++;
    }
    cout << "Sum : " << sum << endl;
    return 0;
}