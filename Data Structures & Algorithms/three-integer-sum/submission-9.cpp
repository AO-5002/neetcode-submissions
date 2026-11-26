class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        sort(v.begin(), v.end());
        vector<vector<int>> res;

        for (int i = 0; i < v.size(); i++) {
            if (v[i] > 0) break;
            if (i > 0 && v[i] == v[i - 1]) continue;

            int j = i + 1, k = v.size() - 1;
            while (j < k) {
                int sum = v[i] + v[j] + v[k];
                if (sum > 0) {
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    res.push_back({v[i], v[j], v[k]});
                    j++;
                    k--;
                    while (j < k && v[j] == v[j - 1]) {
                        j++;
                    }
                }
            }
        }
        return res;
    }
};