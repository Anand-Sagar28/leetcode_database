#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = nums[0];
        int max_sum = nums[0];
        for(int i=1;i<nums.size();i++){
            cur_sum = max(nums[i],cur_sum+nums[i]);
            max_sum = max(max_sum,cur_sum);

        }return max_sum;
    }
};
int main() {
    Solution solution;
    vector<int> input = {-2,1,-3,4,-1,2,1,-5,4};
    int result = solution.maxSubArray(input);
    cout << "Max Subarray Sum: " << result << endl;
    return 0;
}