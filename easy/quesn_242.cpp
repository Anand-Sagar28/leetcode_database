#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;
// This code checks if two strings are anagrams of each other.

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char c: s){
            mp1[c]++;
        }
        for(char c:t){
            mp2[c]++;
        }
        return mp1==mp2;
    }
};

int main() {
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    bool result = sol.isAnagram(s, t);
    
    if (result) {
        std::cout << s << " and " << t << " are anagrams." << std::endl;
    } else {
        std::cout << s << " and " << t << " are not anagrams." << std::endl;
    }

    return 0;
}   