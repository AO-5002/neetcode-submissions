class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for(int i : nums){
            freq[i]++;
        }

        // Bucket Sort

        vector<vector<int>> group(nums.size() + 1);
        for(auto [k, v] : freq){
            group[v].push_back(k);
        }
        
        vector<int> res;
        for(int i = group.size() - 1; i > 0; i--){
            for(int n : group[i]){
                res.push_back(n);
                if(res.size() == k) return res;
            }
        }

        return {};
    }
};
