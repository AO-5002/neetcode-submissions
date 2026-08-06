class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for(auto& v : matrix){
            bool ans = std::binary_search(v.begin(), v.end(), target);
            if(ans) return ans;
        }

        return false;
    }
};
