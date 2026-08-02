class Solution {
public:

    string encode(string s){
        vector<int> code(26, 0);
        for(char c : s) code[c - 'a']++;

        string encoding;
        for(int i : code) encoding += to_string(i) + ".";
        return encoding;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string s : strs){
            mp[encode(s)].push_back(s);
        }

        vector<vector<string>> res;
        for(auto [_, v] : mp) res.push_back(v);

        return res;
    }
};
