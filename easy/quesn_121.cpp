// Brute force
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i =1;i<prices.size();i++){
            if(buy>prices[i]){
                buy = prices[i];
            }else{
                if(prices[i]-buy > profit){
                    profit = prices[i]-buy;
                }
            }
        }return profit;
    }
};
int main() {
    Solution solution;
    vector<int> input = {7, 1, 5, 3, 6, 4};
    int result = solution.maxProfit(input);
    cout << "Max Profit: " << result << endl;
    return 0;
}