class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {

        unordered_map<int, int> mp;
        for(int i = 0; i < v.size(); i++){

            int diff = target - v[i];
            if(mp.contains(diff)) return {mp[diff], i};
            mp[v[i]] = i;
        }

        return {};
    }
};
