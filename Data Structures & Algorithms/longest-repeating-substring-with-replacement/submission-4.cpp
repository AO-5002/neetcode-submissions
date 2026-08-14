class Solution {
public:
    int characterReplacement(string s, int k) {
    unordered_map<char,int> freq;
    int l = 0, res = 0, maxFreq = 0;

    for (int r = 0; r < s.length(); r++) {
        freq[s[r]]++;
        maxFreq = max(maxFreq, freq[s[r]]);   // track the most frequent char
        int replacements = (r - l + 1) - maxFreq;
        if (replacements > k) { freq[s[l]]--; l++; }
        res = max(res, r - l + 1);
    }
    return res;
}
};
