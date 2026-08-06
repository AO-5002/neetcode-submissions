class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int t = 0, b = m.size() - 1;
        int ans_row = -1;

        while (t <= b) {
            int mid = (t + b) / 2;
            if (target >= m[mid][0] && target <= m[mid].back()) {
                ans_row = mid;   // target's range is in this row
                break;
            }
            if (m[mid][0] > target) b = mid - 1;
            else t = mid + 1;
        }

        if (ans_row == -1) return false;
        return binary_search(m[ans_row].begin(), m[ans_row].end(), target);
    }
};