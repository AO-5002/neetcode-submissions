class Solution {
public:
    int search(vector<int>& v, int target) {

        int l = 0, r = v.size() - 1;

        while(l <= r){
            int m = (l + r) / 2;
            if(v[m] == target) return m;
            if (v[m] >= v[l]) {
                if (v[l] <= target && target <= v[m]) r = m - 1;
                else l = m + 1;
            }
            else {
                if (v[m] <= target && target <= v[r]) l = m + 1;
                else r = m - 1;
            }
        }

        return -1;
    }
};
