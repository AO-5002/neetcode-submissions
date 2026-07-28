class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_set<int> val_set;

        for(int i : nums){
            if (val_set.contains(i)){
                return true;
            }

            val_set.insert(i);
        }
        
        return false;
    }
};