class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {

        HashMap<String, List<String>> hashStrings = new HashMap<>();

        for (int i = 0; i < strs.length; i++) {
            char[] charWord = strs[i].toCharArray();
            Arrays.sort(charWord);
            String sortedWord = new String(charWord);

            if (hashStrings.containsKey(sortedWord)) {
                hashStrings.get(sortedWord).add(strs[i]);
            } else {
                List<String> newList = new ArrayList<>();
                newList.add(strs[i]);
                hashStrings.put(sortedWord, newList);
            }
        }

        // Return all grouped anagrams as a list of lists
        return new ArrayList<>(hashStrings.values());
    }
}
