class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(), 0);
        dp[0]=1;

        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<=nums[i]&&i+j<nums.size(); j++){
                if(dp[i]==1){
                    dp[i+j]=1;
                }
            }
        }

        return dp[nums.size()-1];
    }
};
