class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> countS(26, 0), countT(26, 0);
        for(char c : s) countS[c - 'a']++;
        for(char c : t) countT[c - 'a']++;
        return countS == countT;
    }
};
