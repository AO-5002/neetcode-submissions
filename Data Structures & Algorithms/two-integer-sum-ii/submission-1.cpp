class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int l {0};

        while(l < numbers.size()){

            int r = l + 1;
            
            while(r < numbers.size()){

                int sum = numbers[l] + numbers[r];

                if(sum == target){

                    return vector<int>{l + 1, r + 1};
                }

                r++;
            }

            l++;
        }

        return {};
    }
};
