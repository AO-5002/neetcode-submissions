class Solution {
public:
    int maxProfit(vector<int>& p) {
        int l = 0, r = l + 1, res = 0;
        while(r < p.size()){
            if(p[l] > p[r]) {l = r; r = l + 1;}
            else {
                int profit = p[r] - p[l];
                res = max(res, profit);
                r++;
            }
        }

        return res;
    }
};
 