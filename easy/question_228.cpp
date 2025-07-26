#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.empty()) return res;
        int s = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1] + 1) {
                if(s == i - 1)
                    res.push_back(to_string(nums[s]));
                else
                    res.push_back(to_string(nums[s]) + "->" + to_string(nums[i - 1]));
                s = i;
            }
        }
        if(s == nums.size() - 1)
            res.push_back(to_string(nums[s]));
        else
            res.push_back(to_string(nums[s]) + "->" + to_string(nums.back()));
        return res;
    }
};

int main() {
    Solution solution;
    vector<int> input = {0, 1, 2, 4, 5, 7};
    vector<string> result = solution.summaryRanges(input);
    cout << "Result: ";
    for(const string& range : result)
        cout << range << " ";
    cout << endl;
    return 0;
}


