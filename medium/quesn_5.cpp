#include <string>
#include <iostream>
using namespace std;
// This code finds the longest palindromic substring in a given string.
// Gives tle will revise it later

class Solution {
public:
bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (!isalnum(s[left])) { left++; continue; }
        if (!isalnum(s[right])) { right--; continue; }
        if (tolower(s[left]) != tolower(s[right])) return false;
        left++; right--;
    }
    return true;
}
    string longestPalindrome(string s) {
        if(s.length()<2){
            return s;
        }
        string ans;
        int i = 0,j=1;
        int len = 0;
        while (i < s.size()) {
        if (j < s.size()) {
            string news = s.substr(i, j - i + 1);
            if (isPalindrome(news)) {
                if (j - i + 1 > len) {
                    ans = news;
                    len = j - i + 1;
                }
            }
            j++;
        } else {
            i++;
            j = i + 1;
        }
    }
    return ans;
    }
};

int main() {
    Solution sol;
    string s = "babad";
    string result = sol.longestPalindrome(s);
    
    cout << "Longest palindromic substring: " << result << endl;

    return 0;
}   