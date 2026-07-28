class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> valueSet;
        for(int i : nums) {

            if(valueSet.count(i)){
                return true;
            }

            valueSet.insert(i);
        }

        return false;
    }
};