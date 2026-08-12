class Solution {
public:
    int maxProfit(vector<int>& p) {

        int l = 0, r = l + 1, res = 0;
        while(l < r && r < p.size()){

            if(p[r] < p[l]) {l = r; r = l + 1;}
            else {
                res = max(res, p[r] - p[l]);
                r++;
            }
        }
        
        return res;
    }
};
