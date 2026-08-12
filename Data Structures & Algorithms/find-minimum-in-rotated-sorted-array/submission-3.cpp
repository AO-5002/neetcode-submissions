class Solution {
public:
    int findMin(vector<int> &v) {

        int l = 0, r = v.size() - 1;
        while(l < r){
            int m = (l + r) / 2;

            if(v[m] < v[r]) r = m;
            else l = m + 1;
        }

        return v[l];
    }
};
