class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size();
        vector<int> pre(n), pos(n), res(n);

        for(int i = 0; i < n; i++) {
            if(i > 0) pre[i] = v[i - 1] * pre[i - 1];
            else pre[i] = 1;
        }
        
        for (int i = n - 1; i >= 0; i--) {
            if (i != n - 1) pos[i] = v[i + 1] * pos[i + 1];
            else pos[i] = 1;
            
            res[i] = pos[i] * pre[i];
        }

        return res;
    }
};
