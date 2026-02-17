#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int arr[n] = {5,3,1,4,2,6,78,34,54};

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    for (int i = 0; i < n-1; i++)
    {
        int min = i+1;
        for (int j = i; j < n; j++)
        {
            if (arr[min]>arr[j])
            {
                min = j;
            }
            
        }
        swap(arr[i],arr[min]);
        
    }
    // print
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    return 0;
}