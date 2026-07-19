class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        int longest_consecutive = 1;
        int prev = INT_MIN;
        int cnt = 0;
        int current_sum = 1;
        for (auto x : s) {
            if (cnt > 0) {
                if (x == prev + 1) {
                    current_sum++;
                    longest_consecutive = max(longest_consecutive, current_sum);
                } else {
                    current_sum = 1;
                }
            }
            prev = x;
            cnt++;
        }
        return longest_consecutive;
    }
};
