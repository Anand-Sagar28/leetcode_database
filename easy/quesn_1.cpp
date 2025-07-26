#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(mp.find(diff)!=mp.end()){
                return {mp[diff],i};
            }
            mp[nums[i]] = i;
        }return {};
    }
};

int main() {
    Solution solution;
    vector<int> input = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(input, target);
    cout << "Indices: ";
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}