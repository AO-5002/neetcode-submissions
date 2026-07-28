class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        HashMap<String, List<String>> hashStrings = new HashMap<>();
        
        for(String s : strs){
            int[] count = new int [26];

            for(char letter : s.toCharArray()){
                count[letter - 'a']++;
            }

            String hashKey = Arrays.toString(count);

            if(hashStrings.containsKey(hashKey)){
                hashStrings.get(hashKey).add(s);
            }
            else{

                ArrayList<String> newArray = new ArrayList<>();
                newArray.add(s);
                hashStrings.put(hashKey, newArray);
            }
        }

        return new ArrayList<>(hashStrings.values());
    }
}
