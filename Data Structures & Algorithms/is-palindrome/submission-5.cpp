class Solution {
private:
    bool isAlphanum(char c){
        return (
            c >= 'A' && c <= 'Z' ||
            c >= 'a' && c <= 'z' ||
            c >= '0' && c <= '9'
        );
    }
public:
    bool isPalindrome(string s) {

        int l = 0, r = s.length() - 1;

        while(l < r){
            while (l < r && !isAlphanum(s[l])){
                l++;
            }

            while(r > l && !isAlphanum(s[r])){
                r--;
            }

            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }

            l++; r--;
        }
        
        return true;
    }
};
