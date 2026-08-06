class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int t = 0, b = m.size() - 1;

        while (t <= b) {
            int mid = (t + b) / 2;
            if (target >= m[mid][0] && target <= m[mid][m[mid].size() - 1]) {
                return binary_search(m[mid].begin(), m[mid].end(), target);
            }
            
            if (m[mid][0] > target) b = mid - 1;
            else t = mid + 1;
        }

        return false;
    }
};