#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n1 = sizeof(a)/sizeof(a[0]);
    int b[] = {5,6,7,9};
    int n2 = sizeof(b)/sizeof(b[0]);
    int count = 0;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (a[j]==b[i])
            {
                count++;
                break;
            }
            
        }
        
    }
    if (n2==count)
    {
        cout<<"array is a subset";
    }
    else{
        cout<<"not a subset";
    }
    
    return 0;
}