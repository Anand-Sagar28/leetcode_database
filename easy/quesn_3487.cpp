#include <vector>
#include <set>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
    
        set<int> s;
        for(int num : nums) s.insert(num);
        int result = 0;
        for (auto it = s.begin(); it != s.end(); ++it) {
            if (*it > 0) result += *it;
        }
        if (result == 0) result = *s.rbegin();
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> input = {1, -2, 3, 4, -5, 6};
    int result = solution.maxSum(input);
    cout << "Max Sum: " << result << endl;
    return 0;
}