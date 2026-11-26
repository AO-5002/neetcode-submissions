class Solution {
public:

    bool isAlphanum(char c) {
        return (
            c >= 'a' && c <= 'z' ||
            c >= 'A' && c <= 'Z' ||
            c >= '0' && c <= '9'
        );
    } 
    bool isPalindrome(string s) {

        int l = 0, r = s.length() - 1;

        while(l < r) {
            while(!isAlphanum(s[l]) && l < r) l++;
            while(!isAlphanum(s[r]) && l < r) r--;
            if(tolower(s[l]) != tolower(s[r])) return false;
            l++; r--;
        }
        
        return true;
    }
};
