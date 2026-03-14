// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the 
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1  // this row has maximum 1s
// 0 0 0 0
// Output: 2

                   // needs correction
#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int m = 4, n = 4;
    int idx = -1;
    int cMax = 0;
    for (int i = 0; i < m; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[m][n]==1)
            {
                // cout<<i<<" "<<j<<endl;
                c++;
            }
            cout<<i<<" "<<j<<endl;
            
        }
        if(cMax<c){
            cMax = c;
            idx = i;
            cout<<idx<<endl;
        }
        
    }
    cout<<idx;
    return 0;
}