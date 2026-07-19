class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto& num: nums){
            mp[num]++;
        }
        int ans = 0;
        for(auto it: mp){
            int curr = it.first;
             if (mp.find(curr - 1) == mp.end()) {
                int len = 0;
                while (mp.find(curr) != mp.end()) {
                    len++;
                    curr++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
