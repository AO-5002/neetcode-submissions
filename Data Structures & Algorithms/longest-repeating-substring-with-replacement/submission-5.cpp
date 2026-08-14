class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> freq;
        int l = 0, max_freq = 0, res = 0;
        for(int r = 0; r < s.length(); r++){
            freq[s[r]]++;
            max_freq = max(max_freq, freq[s[r]]);
            int window_k = (r - l + 1) - max_freq;
            if(window_k > k) {freq[s[l]]--; l++;}
            res = max(res, r - l + 1);
        }

        return res;
    }
};
