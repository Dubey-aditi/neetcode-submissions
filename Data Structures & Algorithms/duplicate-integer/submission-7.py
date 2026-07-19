class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        if(len(nums)<=1):
            return False

        temp_map = {}
        for i in nums:
            if temp_map.get(i, 0):
                return True
            temp_map[i]=1;

        return False;
        