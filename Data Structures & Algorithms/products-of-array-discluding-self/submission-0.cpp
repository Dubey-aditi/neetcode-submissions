class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // 1 2 4 6
        // 1 2 8 48
        // 48 48 24 6
        int product = 1;
        int zero_cnt = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero_cnt++;
            }
            if (nums[i] != 0) {
                product *= nums[i];
            }
        }
        cout << zero_cnt;
        for (int i = 0; i < nums.size(); i++) {
            if (zero_cnt > 1) {
                ans.push_back(0);
            } else if (zero_cnt == 1) {
                if (nums[i] == 0) {
                    ans.push_back(product);
                } else {
                    ans.push_back(0);
                }
            } else {
                ans.push_back(product / nums[i]);
            }
        }
        return ans;
    }
};
