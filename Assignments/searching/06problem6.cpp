// You have n coins and you want to build a staircase with these coins. The staircase consists of k 
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.
// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.
           // needs correction
#include<iostream>
using namespace std;
int completeRows(int n){
    int lo = 0;
    int hi = n;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        int c = (mid*(mid+1))/2;
        if(){

        }
        else if(){

        }
        else{

        }
    }

    return hi;
}

int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<completeRows(n)<<endl;

    return 0;
}