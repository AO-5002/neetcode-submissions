class Solution {
public:
    bool isalphanum(char c) {
        return (
            c >= 'a' && c <= 'z' ||
            c >= 'A' && c <= 'Z' ||
            c >= '0' && c <= '9'
        );
    }

    bool isPalindrome(string s) {

        int l = 0, r = s.length() - 1;
        while(l < r){
            while(l < r && !isalphanum(s[l])) l++;
            while(l < r && !isalphanum(s[r])) r--;
            if(tolower(s[l]) != tolower(s[r])) return false;

            l++; r--;
        }
        
        return true;
    }
};
