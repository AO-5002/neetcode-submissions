class Solution {
    public int[] twoSum(int[] nums, int target) {

        HashMap<Integer, Integer> hashArr = new HashMap<>();
        
        for(int i = 0; i < nums.length; i++){
            hashArr.put(nums[i], i);
        }

        for(int i = 0; i < nums.length; i++){
            int diff = target - nums[i];

            if(hashArr.containsKey(diff) && i != hashArr.get(diff)){
                return new int[]{i, hashArr.get(diff)};
            }
        }

        return new int[0];
    }
}
