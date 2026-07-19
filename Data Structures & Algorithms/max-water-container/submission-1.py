class Solution:
    def maxArea(self, heights: List[int]) -> int:
        i =0
        j=len(heights)-1
        max_amount=0

        while i<j:
            temp_amount = (j-i)*min(heights[i], heights[j])
            max_amount = max(max_amount, temp_amount)
            if(heights[i]<=heights[j]):
                i+=1
            else:
                j-=1

        return max_amount
        