#include <iostream>
#include <stack>
using namespace std;
void nextGreaterElement(int arr[], int ans[], int n){
    stack<int> st;
    for(int i = n-1; i >= 0; i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i] = -1;
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
}
int main()
{
    int arr[] = {4, 1, 2, 5, 4, 3, 4, 8, 2, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    nextGreaterElement(arr, ans, n);
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}