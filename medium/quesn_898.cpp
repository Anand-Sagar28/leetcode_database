#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;    

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>res;
        unordered_set<int>cur;
        for(int x:arr){
            unordered_set<int>next;
            next.insert(x);
            for(int y : cur){
                next.insert(y|x);
            }
            res.insert(next.begin(),next.end());
            cur = next;
        }return res.size();
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 3};
    int result = sol.subarrayBitwiseORs(arr);
    
    cout << "Number of distinct bitwise OR results: " << result << endl;

    return 0;
}