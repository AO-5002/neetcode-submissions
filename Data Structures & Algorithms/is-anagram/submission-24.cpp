class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> s_mp;
        unordered_map<char, int> t_mp;

        for(char c : s) s_mp[c]++;
        for(char c : t) t_mp[c]++;
        
        return s_mp == t_mp;
    }
};
