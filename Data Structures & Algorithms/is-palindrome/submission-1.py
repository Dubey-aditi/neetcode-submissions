class Solution:
    def is_valid(self, char):
        if((char>='a' and char<='z') or(char>='0' and char<='9')):
            return True
        return False

    def isPalindrome(self, s: str) -> bool:
        temp = s.lower().replace(" ", "")
        n= len(temp)


        i=0
        j= n-1
        while i<j:
            print(i, " ", j)
            if not self.is_valid(temp[i]):
                i+=1
                print(i, " ", j)
            elif not self.is_valid(temp[j]):
                j-=1;
                print(i, " ", j)
            else:
                if temp[i]!=temp[j]:
                    return False
                i+=1
                j-=1
        return True
        