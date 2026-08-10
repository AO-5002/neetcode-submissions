class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {


        int t = 0, b = m.size() - 1;

        while(t <= b){

            int mid_row = (t + b) / 2;
            if(m[mid_row][0] <= target && target <= m[mid_row][m[mid_row].size() - 1]){
                
                int l = 0, r = m[mid_row].size() - 1;
                while(l <= r){
                    int mid = (l + r) / 2;
                    if(m[mid_row][mid] == target) return true;
                    if(m[mid_row][mid] > target) r = mid - 1;
                    else l = mid + 1;
                }

                return false;
            }
            else if(m[mid_row][0] > target) b = mid_row - 1;
            else t = mid_row + 1;
        }

        return false;
    }
};
