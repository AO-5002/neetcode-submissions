class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max_profit = 0;

        for(int i = 0; i < p.size() - 1; i++){
            for(int j = i + 1; j < p.size(); j++){
                int profit = p[j] - p[i];
                max_profit = max(max_profit, profit);
            }
        }

        return max_profit;
    }
};
