class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        for(char i : s){
            s_map[i]++;
        }

        for(char i : t){
            t_map[i]++;
        }

        return s_map == t_map; 
    }
};
