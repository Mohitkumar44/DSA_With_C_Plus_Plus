#include<iostream>
using namespace std;
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int i, int arr[], int n) {
    while(i*2 < n) {
        if((i*2)+1 <= n) {
            if(arr[i] > arr[(2*i)] && arr[i] > arr[(2*i)+1]) {
                if(arr[i*2] < arr[(i*2)+1]) {
                    swap(arr[i], arr[i*2]);
                    i = i*2;
                }
                else {
                    swap(arr[i], arr[(i*2)+1]);
                    i = i*2+1;
                }
            }
            else if(arr[i] > arr[(2*i)]) {
                swap(arr[i], arr[i*2]);
                i = i*2;                    
            }
            else if(arr[i] > arr[(2*i)+1]) {
                swap(arr[i], arr[(i*2)+1]);
                i = i*2+1;
            }
            else {
                break;
            }
        }
        else if(arr[i] > arr[(2*i)]){
            swap(arr[i], arr[(i*2)]);
            i = (i*2);
        }
        else break;
    }
}
int main(){
    int arr[] = {-1, 10, 2, 14, 11, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);
    for(int i = n/2; i >= 1; i--) {
        heapify(i, arr, n);
    }
    print(arr, n);
}