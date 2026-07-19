class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp1;
        priority_queue<pair<int, int>>pq;
        vector<int>ans;
        for(auto x: nums){
            mp1[x]++;
        }
        for(auto x: mp1){
            int freq = x.second;
            int value = x.first;
            pq.push({freq, value});
        }
        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};
