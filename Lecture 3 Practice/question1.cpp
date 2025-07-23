#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "Value of n : ";
    cin >> n;

    // via forLoop
    // for (int i = 2; i < n; i++)
    // {
    //     if (i%3==0)
    //     {
    //         sum+=i;
    //     }
        
    // }

    // via whileLoop
    int i=2;
    while(i<=n){
        if (i%3==0)
        {
            sum+=i;
        }
        i++;
    }


    cout << "Sum is : " << sum << endl;

    return 0;
}