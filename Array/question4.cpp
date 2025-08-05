#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,5,7,8,45};
    int arr2[]={45,75,78,41,2,3,5,7,8};
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout << arr1[i] << " ";
            }
            
        }
        
    }
    
    return 0;
}