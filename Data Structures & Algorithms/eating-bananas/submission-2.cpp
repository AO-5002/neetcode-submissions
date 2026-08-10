class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {

        int l = 1, r = *max_element(p.begin(), p.end()), k = r;

        while(l <= r){

            int mid = (l + r) / 2;
            long long temp = 0;
            for(int i : p) temp += ceil((double)i / mid);
            if(temp <= h) {
                k = mid; 
                r = mid - 1; 
            }
            else l = mid + 1;
        }

        return k;
    }
};
