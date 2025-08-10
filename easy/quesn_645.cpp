#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

// This code finds the duplicate and missing numbers in an array of size n containing numbers from 1 to n.

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int actual_sum = n * (n + 1) / 2;
        int array_sum = 0;
        int unique_sum = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int a : nums) {
            array_sum += a;
        }


        for (int a : s) {
            unique_sum += a;
        }

        int missing = actual_sum - unique_sum;
        int duplicate = array_sum - unique_sum;

        return {duplicate, missing};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = sol.findErrorNums(nums);
    
    cout << "Duplicate number: " << result[0] << ", Missing number: " << result[1] << endl;

    return 0;
}
