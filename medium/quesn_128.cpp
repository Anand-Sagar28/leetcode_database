using namespace std;
#include <vector>
#include <iostream>
#include <algorithm>    

// This code finds the length of the longest consecutive elements sequence in an unsorted array.
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.empty()) return 0;
        int count = 1;
        int maxCount = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i + 1]) {
                count++;
            } 
            else if (nums[i] == nums[i + 1]) {
                continue; 
            } 
            else {
                maxCount = max(maxCount, count);
                count = 1; 
            }
        }

        maxCount = max(maxCount, count);
        return maxCount;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = sol.longestConsecutive(nums);
    
    cout << "Length of the longest consecutive elements sequence: " << result << endl;

    return 0;
}   