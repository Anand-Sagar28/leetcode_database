#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;    

// This code finds the maximum product of a contiguous subarray in an integer array.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //     int n = nums.size();
    // int res = nums[0];
    // int i = 0;
    // while(i<n){
    //     int prod = 1;
    //     int j = i;
    //     while(j<n){
    //         prod = prod *nums[j];
    //         res = max(res,prod);
    //         j++;
    //     }i++;
    // }
    // return res;
    int curmax = nums[0], curmin = nums[0], res = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]<0) {
            swap(curmax,curmin);
        }
        curmax = max(nums[i],curmax*nums[i]);
        curmin = min(nums[i],curmin*nums[i]);
        res = max(curmax,res);
    }return res;
    
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,3,-2,4};
    int result = sol.maxProduct(nums);
    
    cout << "Maximum product of a contiguous subarray: " << result << endl;

    return 0;
}   