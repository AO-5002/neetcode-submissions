class Solution {
public:
    bool is_alpha(char c){
        return (
            c >= 'a' && c <= 'z' ||
            c >= 'A' && c <= 'Z' ||
            c >= '0' && c <= '9'
        );
    }
    
    bool isPalindrome(string s) {

        int l = 0, r = s.length() - 1;

        while(l < r){

            while(l < r && !is_alpha(s[l])){
                l++;
            }

            while(r > l && !is_alpha(s[r])){
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
