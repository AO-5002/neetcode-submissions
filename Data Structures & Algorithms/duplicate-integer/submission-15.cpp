class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> v;

        for(int i : nums){
            if (v.contains(i)){
                return true;
            }

            v.insert(i);
        }
        
        return false;
    }
};