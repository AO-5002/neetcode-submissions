class Solution {
    public boolean isAnagram(String s, String t) {

        if(s.length() != t.length()) return false;

    HashMap<Character, Integer> setOne = new HashMap<>();
    HashMap<Character, Integer> setTwo = new HashMap<>();
    
    for(int i = 0; i < s.length(); i++){
        setOne.put(s.charAt(i), setOne.getOrDefault(s.charAt(i), 0) + 1);
        setTwo.put(t.charAt(i), setTwo.getOrDefault(t.charAt(i), 0) + 1);
    }
    
    return setOne.equals(setTwo);
}
}
