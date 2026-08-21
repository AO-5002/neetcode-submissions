class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int t = 0, b = mat.size() - 1;
        while(t <= b){

            int mid = (t + b) / 2;
            if(mat[mid][0] <= target && target <= mat[mid].back()){
                
                int l = 0, r = mat[mid].size() - 1;
                while(l <= r){
                    int m = (l + r) / 2;
                    if(mat[mid][m] == target) return true;
                    if(mat[mid][m] > target) r = m - 1;
                    else l = m + 1;
                }

                return false;
            }
            if(mat[mid][0] > target) b = mid - 1;
            else t = mid + 1;
        }
        
        return false;
    }
};
