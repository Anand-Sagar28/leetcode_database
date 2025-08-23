#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
// This code finds all elements that appear more than n/3 times in an array.

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int len = nums.size();
        vector<int>ans;
        for(int n:nums){
            mp[n]++;
        }
        for(auto &it : mp){
            if(it.second>len/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,2,3};
    vector<int> result = sol.majorityElement(nums);
    
    cout << "Majority elements (more than n/3 times): ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}   