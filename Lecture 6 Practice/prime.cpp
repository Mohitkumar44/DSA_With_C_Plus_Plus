#include<iostream>
using namespace std;
void printTill(int num){

    for (int j = 2; j < num; j++)
    {
        int prime=1;
        for (int i = 2; i*i < j; i++)
        {
            if (j%i==0)
            {
                prime =0;
                break;
            }
            
        }  
        if (prime)
        {
            cout << j << endl;
        }
        
        
    }
}

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    printTill(num);
    return 0;
}