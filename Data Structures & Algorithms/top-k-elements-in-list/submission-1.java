class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        
        // Step 1: Count frequencies
        HashMap<Integer, Integer> freqMap = new HashMap<>();
        for(int num : nums) {
            freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
        }
        
        // Step 2: Create buckets indexed by frequency
        List<Integer>[] buckets = new List[nums.length + 1];
        for(int i = 0; i < buckets.length; i++) {
            buckets[i] = new ArrayList<>();
        }
        
        // Step 3: Put elements into buckets based on their frequency
        for(int key : freqMap.keySet()) {
            int frequency = freqMap.get(key);
            buckets[frequency].add(key);
        }
        
        // Step 4: Collect top k elements from highest frequency buckets
        int[] result = new int[k];
        int index = 0;
        
        // Traverse from highest frequency to lowest
        for(int i = buckets.length - 1; i >= 0 && index < k; i--) {
            for(int num : buckets[i]) {
                result[index++] = num;
                if(index == k) break;
            }
        }
        
        return result;
    }
}