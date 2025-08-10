#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

// This code finds the next greater element for each element in nums1 from nums2.

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]] = i;
        }
        for(int nums:nums1){
            int ele = -1;
            int index = mp[nums];
            for(int i=index+1;i<nums2.size();i++){
                if(nums2[i] > nums){
                    ele = nums2[i];
                    break;
                }
            }
            ans.push_back(ele);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = sol.nextGreaterElement(nums1, nums2);
    
    cout << "Next greater elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}