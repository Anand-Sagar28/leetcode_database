#include <string>
#include <iostream>
using namespace std;

// This code implements the repeatedStringMatch function to find the minimum number of times string a must be repeated so that b is a substring of it.

class Solution {
public:
    string repeator(string a, int target) {
        string result;
        for (int i = 0; i < target; i++) {
            result += a;
        }
        return result;
    }

    int repeatedStringMatch(string a, string b) {
        int res = -1;
        int rep = b.size() / a.size();
        
        string repeatedA = repeator(a, rep);
        if (repeatedA.find(b) != string::npos) {
            return rep;
        }

        repeatedA += a;
        if (repeatedA.find(b) != string::npos) {
            return rep + 1;
        }
        repeatedA += a;
        if (repeatedA.find(b) != string::npos) {
            return rep + 2;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string a = "abcd";
    string b = "cdabcdab";
    int result = sol.repeatedStringMatch(a, b);
    
    cout << "The minimum number of times string '" << a << "' must be repeated so that '" << b << "' is a substring of it: " << result << endl;

    return 0;
}