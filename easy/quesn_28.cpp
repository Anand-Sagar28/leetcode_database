#include <string>
#include <iostream>
using namespace std;

// This code implements the strStr function to find the first occurrence of a substring in a string.

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()){
            return -1;
        }
        for(int i = 0;i<=haystack.length()- needle.length();i++){
            if(haystack.substr(i,needle.length())==needle){
                return i;
            }
        }return -1;
    }
};

int main() {
    Solution sol;
    string haystack = "hello";
    string needle = "ll";
    int index = sol.strStr(haystack, needle);
    
    cout << "The index of the first occurrence of '" << needle << "' in '" << haystack << "' is: " << index << endl;

    return 0;
}