class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        #optimized- min price so far
        n= len(prices)
        max_profit = 0
        min_price = 101

        for i in range(n):
            min_price = min(min_price, prices[i])
            print("current price:", prices[i],  " min price", min_price)
            temp_profit = prices[i] - min_price
            max_profit = max(max_profit, temp_profit)
            print("temp_profit:", temp_profit,  " max_profit", max_profit)

        return max_profit
        


        