class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int k = s1.length();
        if (k > s2.length()) return false;

        vector<int> match(26, 0), win(26, 0);

        for(char c : s1) match[c - 'a']++;
        for(int r = 0; r < s2.length(); r++){
            win[s2[r] - 'a']++;

            if(r >= k) win[s2[r - k] - 'a']--;
            if(match == win) return true;
        }
        
        return false;
    }
};
