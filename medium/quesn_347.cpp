#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
// This code finds the k most frequent elements in an array.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        vector<int>ans;
        while(k>0){
            int maxfreq = 0;
            int ele = 0;
            for(auto &it : mp){
                if(it.second>maxfreq){
                    maxfreq=it.second;
                    ele = it.first;
                }
            }
            ans.push_back(ele);
            mp.erase(ele);
            k--;
        }
        return ans;
    
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> result = sol.topKFrequent(nums, k);
    
    cout << "Top " << k << " frequent elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}