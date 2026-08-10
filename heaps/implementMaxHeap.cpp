#include<iostream>
using namespace std;
class maxHeap{
public:
    int arr[100];
    int size;
    maxHeap() {
        size = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int val){
        int idx = size;
        arr[idx] = val;
        while(idx!=1) {
            if(arr[idx/2] < arr[idx]) {
                swap(arr[idx/2], arr[idx]);
                idx = idx/2;
            } 
            else break;
        }
        size++;
    }
    void pop(){
        arr[1] = arr[size-1];
        size--;
        int i = 1;
        while(i*2 < size) {
            if((i*2)+1 <= size) {
                if(arr[i] < arr[(2*i)] && arr[i] < arr[(2*i)+1]) {
                    if(arr[i*2] > arr[(i*2)+1]) {
                        swap(arr[i], arr[i*2]);
                        i = i*2;
                    }
                    else {
                        swap(arr[i], arr[(i*2)+1]);
                        i = i*2+1;
                    }
                }
                else if(arr[i] < arr[(2*i)]) {
                    swap(arr[i], arr[i*2]);
                    i = i*2;                    
                }
                else if(arr[i] < arr[(2*i)+1]) {
                    swap(arr[i], arr[(i*2)+1]);
                    i = i*2+1;
                }
                else {
                    break;
                }
            }
            else if(arr[i] < arr[(2*i)]){
                swap(arr[i], arr[(2*i)]);
                i = (i*2);
            }
            else break;
        }
    }
    int size_of() {
        return size-1;
    }
    void display(){
        for (int i = 1; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }        
        cout<<endl;
    }
};
int main(){
    maxHeap heap;
    heap.push(10);
    heap.push(50);
    heap.push(40);
    heap.push(70);
    heap.push(12);
    heap.push(64);
    heap.push(3);
    heap.display();
    cout<<heap.size_of()<<endl;
    cout<<heap.top()<<" ";
    heap.pop();
    cout<<heap.top()<<" ";
    heap.pop();
    cout<<heap.top()<<" ";
    heap.pop();
    cout<<heap.top()<<" ";
    heap.pop();
    cout<<heap.top()<<" ";
    heap.pop();
    cout<<heap.top()<<" ";
    heap.pop();
    cout<<heap.top()<<" ";
    heap.pop();
}