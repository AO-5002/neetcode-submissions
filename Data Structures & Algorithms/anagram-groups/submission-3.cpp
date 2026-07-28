class Solution {
private:
    string encode(string w) {
        sort(w.begin(), w.end());
        return w;
    }
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagram_map;

        for (string word : strs) {
            string encoded_word = encode(word);
            anagram_map[encoded_word].push_back(word);  
        }

        vector<vector<string>> result;
        for(auto& [key, group] : anagram_map){
            result.push_back(group);
        }

        return result;
    }
};
