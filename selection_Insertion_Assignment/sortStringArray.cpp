#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str[] = {"raghav", "sanket", "mohit", "pranjal", "gireesh"};
    int n = 5;

    // bubbleSort.
    for (int i = 0; i < n; i++){
        bool sorted = true;
        for (int j = 0; j < n-i-1; j++){
            // for (int k = 0; k < min(str[j].size(),str[j+1].size()) && str[j][k]>str[j+1][k]; k++)
            // {
            //     swap(str[j],str[j+1]);
            //     break;
            // }
            if (str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                sorted = false;
            }
            
        }  
        if(sorted) break;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}