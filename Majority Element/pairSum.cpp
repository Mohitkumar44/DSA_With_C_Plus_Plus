#include<iostream>
#include<vector>
using namespace std;
vector<int> search(vector<int> nums,int target){
    vector<int> ans;
    int n = nums.size();
    int i=0,j=n-1;
    while (i < j)
    {
        int pairSum = nums[i]+nums[j];
        if (pairSum<target){
            i++;
        }
        else if(pairSum>target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
    
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    int target = 13;
    vector<int> answ = search(nums,target);
    cout << answ[0] << ", " <<answ[1];
    
    return 0;
}