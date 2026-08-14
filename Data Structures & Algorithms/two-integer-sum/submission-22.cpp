class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {

        unordered_map<int, int> mp;
        for(int i = 0; i < v.size(); i++){
            if(mp.contains(target - v[i])) return {mp[target - v[i]], i};
            mp[v[i]] = i;
        }

        return {};
    }
};
