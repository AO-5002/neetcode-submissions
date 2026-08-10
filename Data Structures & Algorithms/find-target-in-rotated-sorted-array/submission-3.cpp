class Solution {
public:
    int search(std::vector<int>& v, int target) {
        int l = 0, r = v.size() - 1;

        while (l <= r) {
            int m = (l + r) / 2;
            if (target == v[m]) return m;

            if (v[l] <= v[m]) {
                if (target > v[m] || target < v[l]) l = m + 1;
                else r = m - 1;
            } else {
                if (target < v[m] || target > v[r]) r = m - 1;
                else l = m + 1;
            }
        }
        return -1;
    }
};