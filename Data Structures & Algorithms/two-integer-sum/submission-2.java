class Solution {
    public int[] twoSum(int[] nums, int target) {

        int[] returnArr = {0, 0}; 

        for(int i = 0; i < nums.length; i++){

            int num1 = nums[i];

            for(int j = 1; j < nums.length; j++){

                int num2 = nums[j];

                if(num1 + num2 == target && i != j){
                    returnArr[0] = i;
                    returnArr[1] = j;
                    return returnArr;
                }
            }
        }

        return returnArr;
    }
}
