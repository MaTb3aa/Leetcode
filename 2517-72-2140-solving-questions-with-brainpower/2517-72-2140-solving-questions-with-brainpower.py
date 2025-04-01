class Solution:
    def mostPoints(self, questions: List[List[int]]) -> int:
        n = len(questions)
        dp = [0]*(n+1)
        for i in range(n-1,-1,-1):
            nxt = min(n,i+questions[i][1]+1)
            dp[i] = max(dp[i+1],dp[nxt]+questions[i][0])
        return dp[0]