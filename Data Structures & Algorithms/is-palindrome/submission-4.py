class Solution:
    def is_valid(self, char):
        if((char>='a' and char<='z') or(char>='0' and char<='9')):
            return True
        return False

    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        n = len(s)
        i=0
        j= n-1
        while i<j:
            print(f'first :{s[i]} second: {s[j]}')
            if not self.is_valid(s[i]):
                i+=1
                continue
            elif not self.is_valid(s[j]):
                j-=1;
                continue
            if s[i]!=s[j]:
                print(f'Inside first :{s[i]} Inside second: {s[j]}')
                return False
            i+=1
            j-=1
        return True
        