class Solution {
public:
    int max_freq_val(unordered_map<char, int>& m){
        int res = 0;
        for(auto& [_, v] : m) res = max(res, v);
        return res;
    }

    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int l = 0, res = 0;
        for(int r = 0; r < s.length(); r++){
            freq[s[r]]++;
            int window_len = (r - l + 1) - max_freq_val(freq);
            if(window_len > k) {freq[s[l]]--; l++;}

            res = max(res, r - l + 1);
        }
        
        return res;
    }
};
