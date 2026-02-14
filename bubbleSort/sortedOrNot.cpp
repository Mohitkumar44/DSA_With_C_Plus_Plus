#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,4,6,3,2,1};
    bool sort = true;
    for(int i = 1; i < 6; i++){
        for (int j = 0; j < 6-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                sort = false;
                break;
            }
            
        }
        if (sort)
        {
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