#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,0};
    vector<char> vec1 = {'a','b','c','d','e','f'};
    for(int i : vec){
        cout << i << " ";
    }
    for(char i : vec1){
        cout << i << " ";
    }
    cout << vec.size() << endl;
    return 0;
}