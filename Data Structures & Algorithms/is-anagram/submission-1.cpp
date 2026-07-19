class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp1;

        for(int i=0; i<s.size(); i++){
            mp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            if(mp1.find(t[i])==mp1.end()){
                return false;
            }
            mp1[t[i]]--;
        }

        for(auto x:mp1){
            if(x.second!=0){
                return false;
            }
        }

        return true;
    }
};
