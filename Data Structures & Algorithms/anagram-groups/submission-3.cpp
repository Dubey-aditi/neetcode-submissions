class Solution {
   public:
    string getKey(string s){
        vector<int>fq(26,0);
        for(auto c: s){
            fq[c-'a']++;
        }
        string key = "";
        for(int i = 0;i<26;i++){
            key  += char('a' + i) + to_string(fq[i]);
        }
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for (auto x : strs) {
            string key = getKey(x);
            mp[key].push_back(x);
        }

        for(auto x: mp){
            // string key = x.first;
            // vector<int>v = x.second;
            // vector<string>temp;
            // for(int i = 0;i < v.size();i++){
            //     temp.push_back(strs[v[i]]);
            // }
            ans.push_back(x.second);
        }
        return ans;
    }
};
