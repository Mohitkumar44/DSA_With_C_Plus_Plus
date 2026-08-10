#include<iostream>
#include<vector>
using namespace std;
class maxHeap{
public:
    vector<int> v;
    int top(){
        return v[1];
    }
    maxHeap(){
        v.push_back(0);
    }
    void push(int val){
        int idx = v.size();
        v.push_back(val);
        while(idx!=1) {
            if(v[idx/2]<v[idx]) {
                swap(v[idx/2], v[idx]);
                idx = idx/2;
            } 
            else break;
        }
    }
    void pop(){
        v[1] = v[v.size()-1];
        v.pop_back();
        int i = 1;
        while(i*2 <= v.size()-1) {
            if((i*2)+1 <= v.size()) {
                if(v[i] < v[(2*i)] && v[i] < v[(2*i)+1]) {
                    if(v[i*2] > v[(i*2)+1]) {
                        swap(v[i], v[i*2]);
                        i = i*2;
                    }
                    else {
                        swap(v[i], v[(i*2)+1]);
                        i = i*2+1;
                    }
                }
                else if(v[i] < v[(2*i)]) {
                    swap(v[i], v[i*2]);
                    i = i*2;                    
                }
                else if(v[i] < v[(2*i)+1]) {
                    swap(v[i], v[(i*2)+1]);
                    i = i*2+1;
                }
                else {
                    break;
                }
            }
            else if(v[i] < v[(2*i)]){
                swap(v[i], v[(i*2)]);
                i = (i*2);
            }
            else break;
        }
    }
    int size_of() {
        return v.size();
    }
    void display(){
        for (int i = 1; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
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