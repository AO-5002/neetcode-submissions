class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        if(s.length() != t.length()){return false;}

        for(int i = 0; i < s.length(); i++){
            sMap[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++){
            tMap[t[i]]++;
        }

        return sMap == tMap;
    }
};
