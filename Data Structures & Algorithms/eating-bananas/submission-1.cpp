class Solution {
public:

    int minEatingSpeed(vector<int>& p, int h) {
        int r = *max_element(p.begin(), p.end()), l = 1, ans = r;
        while (l <= r) {
            int mid = (l + r) / 2;
            long count = 0;
            for (int i : p) count += (i + mid - 1) / mid;   // integer ceil
            if (count <= h) { ans = mid; r = mid - 1; }
            else l = mid + 1;
        }

        return ans;
    }

};
