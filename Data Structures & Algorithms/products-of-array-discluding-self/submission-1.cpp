class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> res(n, 1);

        // nums = [1, 2, 3, 4]
        // res = [1, 1, 1, 1]

        for(int i = 1; i < n; i++){
            res[i] = res[i - 1] * nums[i - 1];

            // res = [1, 1, 2, 6]
        }

        int postfix = 1;
        for(int i = n - 1; i >= 0; i--){

            // i = 3
            // res = [1, 1, 18, 6]
            // postfix = 1 -> 6 -> 
            res[i] *= postfix;
            postfix *= nums[i];
        }

        return res;
    }
};
