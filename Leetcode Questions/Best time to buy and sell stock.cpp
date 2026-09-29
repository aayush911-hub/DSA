#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int max_profit_brute_force(vector <int> &prices) {
        int profit=0, curr_profit=0;

        for (int i=0; i<prices.size(); i++) {
            for (int j=i+1; j<prices.size(); j++) {
                if ((prices[j]-prices[i])<0) {
                    continue;
                }
                else {
                    curr_profit = prices[j]-prices[i];
                    if (curr_profit>profit) {
                        profit= curr_profit;
                    }
                }
            }
        }
        return profit;
    }

    int max_profit(vector <int> &prices) {
        int max_profit=0, best_buy=prices[0], curr_profit;

        for (int i=1; i<prices.size(); i++) {
            if (prices[i] > best_buy) {
                curr_profit= prices[i] - best_buy;
                max_profit= max(curr_profit, max_profit);
            }
            best_buy= min(prices[i], best_buy);
        }
        return max_profit;
    }
};

int main() {
    vector <int> prices = {7,1,5,3,6,4};
    Solution s1;
    int value= s1.max_profit_brute_force(prices);
    int value1= s1.max_profit(prices);
    cout<<value1;
    return 0;
}