class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=1){
            return false;
        }
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                return true;
            }
        }
        // for(auto x: mp){
        //     if(x.second>1){
        //         return true;
        //     }
        // }
        return false;
    }
};