#include <vector>   
#include <iostream>
using namespace std;

// This code finds the number of integers in an array that have an even number of digits.

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(int n:nums){
            int count = 0;
            string i = to_string(n);
            for(char c: i){
                count++;
            }
            if(count%2 == 0){
                res++;
            }
    }return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {12, 345, 2, 6, 7896};
    int result = sol.findNumbers(nums);
    
    cout << "Count of numbers with even number of digits: " << result << endl;

    return 0;
}