class Solution {
public:

    string encode(string s){
        vector<int> count (26, 0);
        string res = "";
        for(char c : s) count[c - 'a']++;
        for(int i : count) res += to_string(i) + ".";

        return res;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string s : strs) mp[encode(s)].push_back(s);

        vector<vector<string>> res;
        for(auto& [_, v] : mp) res.push_back(v);
        return res;
    }
};
