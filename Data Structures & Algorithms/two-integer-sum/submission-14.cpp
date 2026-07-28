class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> seen;

        // Iterate through the list
        // Use hash function on elements to store as keys, and store their respective index as a value.

        for(int i = 0; i < nums.size(); i++){
            seen[nums[i]] = i;
        }

        // Iterate through the list again, except check if the difference exists in the map.
        // If so, return the indices
        // Otherwise, return nothing as the pair does not exist

        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];

            if(seen.count(diff) && seen[diff] != i){
                return {i, seen[diff]};
            }
        }

        return {};
    }
};
