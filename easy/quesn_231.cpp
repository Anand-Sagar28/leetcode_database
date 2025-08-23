#include <iostream> 
using namespace std;
// This code checks if a given integer is a power of two.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && not (n & n - 1);
    }
};

int main() {
    Solution sol;
    int n = 16; 
    bool result = sol.isPowerOfTwo(n);
    
    if (result) {
        std::cout << n << " is a power of two." << std::endl;
    } else {
        std::cout << n << " is not a power of two." << std::endl;
    }

    return 0;
}