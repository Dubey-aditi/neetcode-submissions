class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>mp1;
        map<char, int>mp2;

        for(int i=0; i<s.size(); i++){
            mp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            mp2[t[i]]++;
        }

        if(mp1.size()!=mp2.size()){
            return false;
        }

        for(auto x:mp1){
            if((!mp2[x.first]) or x.second!=mp2[x.first]){
                return false;
            }
        }

        return true;
    }
};
