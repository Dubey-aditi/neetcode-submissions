class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)): 
            return False
        mp= {}
        for distinct_char in s:
            mp[distinct_char]=mp.get(distinct_char, 0)+1

        print(mp)

        for seen_char in t:
            if mp.get(seen_char, 0)==0:
                return False
            mp[seen_char]-=1

        # for key, value in mp.items():
        #     if(value>0):
        #         return False


        return True