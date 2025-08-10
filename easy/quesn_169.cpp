#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

// This code finds the majority element in an array, which is the element that appears more than n/2 times.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        int maxFreq = 0;
        int majorityElement = -1;

        for (auto it : mp) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                majorityElement = it.first;
            }
        }  
        return majorityElement;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3};
    int result = sol.majorityElement(nums);
    
    cout << "The majority element is: " << result << endl;

    return 0;
}