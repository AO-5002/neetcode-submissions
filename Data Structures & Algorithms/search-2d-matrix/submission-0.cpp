class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for(auto& v : matrix){
            bool flag = std::binary_search(v.begin(), v.end(), target);
            if(flag) return true;
        }

        return false;
    }
};
