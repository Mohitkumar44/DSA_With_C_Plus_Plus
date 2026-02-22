#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int midx;
        int min = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]<min && arr[j]>0){
                midx = j;
                min = arr[j];
            }
        }
        arr[midx] = c;
        c--;
        
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]*=-1;
        cout<<arr[i]<<" ";
    }
    return 0;
}