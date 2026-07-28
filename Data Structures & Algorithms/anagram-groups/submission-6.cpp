class Solution {
public:

    string encode(string s){

        vector<int> count(26, 0);
        for(char i : s){
            count[i - 'a']++;
        }

        string key = "";
        for(int i : count){
            key += to_string(i) + ",";
        }

        return key;
    }


    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(string i : strs){
            string encoding = encode(i);

            mp[encoding].push_back(i);
        }

        vector<vector<string>> res;
        for(auto& [_, v] : mp){

            res.push_back(v);
        }

        return res;
    }
};
