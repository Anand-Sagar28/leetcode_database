#include <vector>
#include <set>
#include <iostream>
using namespace std;

// This code finds the duplicate number in an array of size n containing numbers from 1 to n-1.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       set<int>s;
       for(int num:nums){
        if(s.find(num) != s.end()){
            return num;
        }s.insert(num);
       }return 0;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = sol.findDuplicate(nums);
    
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}