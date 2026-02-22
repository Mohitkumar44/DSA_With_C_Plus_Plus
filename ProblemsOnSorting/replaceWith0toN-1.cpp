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

    vector<int> v(5,0);

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int midx;
        int min = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]<min && v[j]==0){
                midx = j;
                min = arr[j];
            }
        }
        arr[midx] = c;
        v[midx] = 1;
        c++;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}