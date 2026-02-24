#include<iostream>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5, 3, 10, 3};
    int n = 4;
    if (n == 1){
        cout<<"K can be any number";
        return 0;
    }
    
    int mn = INT_MIN;
    int mx = INT_MAX;
    for(int i = 0; i < n-1; i++){
        if(arr[i+1] >= arr[i]){
            int k = (arr[i+1]+arr[i])/2.0;   // correct
            mx = min(mx, k);
        }
        else{
            // float k = ((arr[i+1]+arr[i])/2.0);
            // int r = k;
            // if (k>r)
            // {
            //     r++;
            // }

            int k = ceil((arr[i+1]+arr[i])/2.0);    //  must find ceil value
            mn = max(mn, k);
        }
        if(mn > mx){
            cout<<"K does not exist";
            return 0;
        }
    }
    cout<<"Range of K : ["<<mn<<", "<<mx<<"]";
    return 0;
}