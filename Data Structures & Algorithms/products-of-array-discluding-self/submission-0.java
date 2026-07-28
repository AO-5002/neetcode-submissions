class Solution {
    public int[] productExceptSelf(int[] nums) {

        int n = nums.length;
        int arr [] = new int [n];

        // Prefix
        int preFix = 1;
        arr[0] = 1;

        for(int i = 1; i < n; i++){

            arr[i] = arr[i - 1] * nums[i - 1];
        }

        // Postfix

        int postFix = 1;
        for(int i = n - 1; i >= 0; i--){
            arr[i] *= postFix;
            postFix *= nums[i];
        }


        return arr;
    }
}  
