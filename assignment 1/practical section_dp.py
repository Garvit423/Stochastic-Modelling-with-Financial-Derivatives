M = 1000000007
dp = [0] * 105
dp[0] = 1
def paths(n):
    if dp[n] != 0:
        return dp[n]
    for i in range(n):
        dp[n] = (dp[n] + ((paths(i) % M) * (paths(n-i-1) % M ))%M)%M
    return dp[n]
    
n = int(input())
print(paths(n))