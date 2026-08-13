class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        int l = 1, r = *max_element(p.begin(), p.end()), k = r;

        while(l <= r){

            int m = (l + r) / 2, count = 0;
            for(int i : p) count += (ceil((double)i / m));
            if(count <= h) {
                k = min(k, m);
                r = m - 1;
            }
            else l = m + 1;
        }

        return k;
    }
};
