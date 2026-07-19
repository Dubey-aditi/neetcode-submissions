class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = ""
        for s in strs:
            encoded_string+= s+'0*0'
        return encoded_string

    def decode(self, s: str) -> List[str]:
        ans = s.split('0*0')[:-1];
        print(ans)
        return ans
        

