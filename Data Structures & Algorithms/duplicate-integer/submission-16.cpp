class Solution {
public:
    bool hasDuplicate(vector<int>& v) {
        unordered_set<int> s;

        for(int i : v){
            if(s.contains(i)) return true;
            s.insert(i);
        }

        return false;
    }
};