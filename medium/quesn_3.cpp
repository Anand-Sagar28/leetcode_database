#include <unordered_map>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int left = 0;
        unordered_map<char,int>res;
        for(int right = 0;right<s.size();right++){
            char c = s[right];
            res[c]++;
            while(res[c]>1){
                char leftchar = s[left];
                res[leftchar]--;
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }return maxlen;
    }
};

int main() {
    Solution sol;
    string s = "abcabcbb";
    int length = sol.lengthOfLongestSubstring(s);
    
    cout << "Length of longest substring without repeating characters: " << length << endl;

    return 0;
}