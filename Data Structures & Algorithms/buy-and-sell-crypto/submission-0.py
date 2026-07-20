class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        #brute- chcek all diff
        n= len(prices)
        max_profit = 0

        for i in range(n):
            for j in range(i+1, n):
                print("bought price:", prices[i], " sell price:", prices[j])
                temp_profit = prices[j]-prices[i]
                max_profit = max(max_profit, temp_profit)
                print("temp_profit:", temp_profit, " max_profit:", max_profit)

        return max_profit
        


        