#include <string>
#include <vector>
using namespace std;
// This code finds the largest 3-digit substring with all identical digits in a given string.

class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> temp = {"999","888","777","666","555","444", "333","222","111", "000"};
        for(string s : temp){
            if(num.find(s) != string::npos){
                return s;
            }
        }
        return "";
    }
};

int main() {
    Solution sol;
    string num = "6777133339"; 
    string result = sol.largestGoodInteger(num);
    return 0;
}