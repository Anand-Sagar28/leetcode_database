// Delete Characters to Make Fancy String
// #include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;    


class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<3){
            return s;
        }
        int j = 2;
        for(int i =2;i<s.size();++i){
            if(s[i]!=s[j-1]||s[i]!=s[j-2]){
                s[j++] = s[i];
            }
        }return s;
    }
};

int main() {
    Solution solution;
    string input = "Leetcode";
    string result = solution.makeFancyString(input);
    cout << "Result: " << result << endl;
    return 0;
}