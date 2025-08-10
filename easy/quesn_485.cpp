#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

// This code finds the duplicate and missing numbers in an array of size n containing numbers from 1 to n.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0;
        int res = 0, track = 0;

        while (j < nums.size()) {
            if (nums[j] == 1) {
                res++;
                track = max(track, res);
                j++;
            } else {
                res = 0;
                j++;
            }
        }

        return track;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int maxConsecutiveOnes = sol.findMaxConsecutiveOnes(nums);
    
    cout << "Maximum number of consecutive ones: " << maxConsecutiveOnes << endl;

    return 0;
}