class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        ans = 0
        temp_str=""
        for i in range(n):
            if s[i] not in temp_str:
                temp_str+=s[i]
                ans= max(len(temp_str), ans)
                print(temp_str)
            else:
                lowest_idx =temp_str.index(s[i])
                temp_str+=s[i]
                temp_str=temp_str[lowest_idx+1:]
                print("lowest_idx:", lowest_idx)
                print(temp_str)

        return ans

        