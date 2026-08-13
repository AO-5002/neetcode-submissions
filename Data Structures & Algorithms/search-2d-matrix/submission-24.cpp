class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        
        int t = 0, b = m.size() - 1;
        while(t <= b){

            int mid_row = (t + b) / 2;
            if(m[mid_row][0] <= target && target <= m[mid_row][m[mid_row].size() - 1]){
                
                int l = 0, r = m[mid_row].size() - 1;
                while(l <= r){
                    int v = (l + r) / 2;
                    if(m[mid_row][v] == target) return true;
                    else if(m[mid_row][v] < target) l = v + 1;
                    else r = v - 1;
                }

                return false;
            }
            else if (m[mid_row][0] < target) t = mid_row + 1;
            else b = mid_row - 1;
        }

        return false;
    }
};
