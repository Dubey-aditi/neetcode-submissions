class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n = len(heights)
        max_amount = 0;
        for i in range(n):
            for j in range(i+1, n):
                temp_amount = min(heights[i], heights[j])*(j-i)
                max_amount = max(max_amount, temp_amount)

        return max_amount

        