#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,4,6,3,2,1};
    bool sort = true;
    for(int i = 0; i < 6-1; i++){
        if (arr[i]>arr[i+1])
        {
            sort = false;
            break;
        }
    }
    if (sort)
    {
        cout<<"Already Sorted";

    }
    else{
        cout<<"Not Sorted";
    }
    
    
    return 0;
}