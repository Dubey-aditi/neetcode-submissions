class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (auto x : strs) {
            // cout<<x<<endl;
            string temp = x;
            sort(temp.begin(), temp.end());
            // cout<<temp<<endl;
            mp[temp].push_back(x);
        }

        for(auto x: mp){
            // for(auto y: x.second){
            //     cout<<y<<" ";
            // }
            ans.push_back(x.second);
        }

        return ans;
    }
};
