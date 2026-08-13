class Solution {
public:
    int maxProfit(vector<int>& p) {

        int l = 0, r = l + 1, max_profit = 0;
        while(l <= r && r < p.size()){
            if(p[l] > p[r]) {l = r; r = l + 1;}
            else {
                int profit = p[r] - p[l];
                max_profit = max(profit, max_profit);
                r++;
            }
        }
        
        return max_profit;
    }
};
