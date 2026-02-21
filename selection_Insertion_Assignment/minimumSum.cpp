#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,1,5,5,2,3};
    int n = 6;

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // insertion sort.
    for(int i = 1; i < n; i++){
        int j = i;
        while(j!=0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    int n1 = 0, n2= 0;
    for (int i = 0; i < n; i++){
        n1 = n1*10 + arr[i];
    }
    
    for (int i = n-1; i > 0; i--){
        if (arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
        

    }
    
    for (int i = 0; i < n; i++){
        n2 = n2*10 + arr[i];
    }

    cout<<"Minimum Sum is : "<<n1+n2<<endl;
    
    return 0;
}