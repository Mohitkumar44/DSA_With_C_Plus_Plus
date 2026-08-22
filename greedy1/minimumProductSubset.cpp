#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int minimumProductSubset(vector<int>& nums) {
    int GreatNeg = INT_MIN;
    int productNeg = 1;
    int cntNeg = 0;
    int productPos = 1;
    bool flag = false;
    int leastPos = INT_MAX;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] < 0) {
            if(nums[i] > GreatNeg) {
                GreatNeg = nums[i];
            }
            cntNeg++;
            productNeg *= nums[i];
        }
        if(nums[i] == 0) {
            flag = true;
        }
        if(nums[i] > 0) {
            if(leastPos > nums[i]) leastPos = nums[i];
            productPos *= nums[i];
        }
    }
    if(GreatNeg == INT_MIN) {
        if(flag) return 0;
        else return leastPos;
    }
    else if(cntNeg%2) {
        return productNeg*productPos;
    }
    else return productNeg*productPos/GreatNeg;
}
int main() {
    // vector<int> nums = {1,2,3,4,2,1,4,-1,3,-1,-2,1,-8};
    vector<int> nums = {11,2,3};
    cout<<minimumProductSubset(nums);
    return 0;
}