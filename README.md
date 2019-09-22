# @RickyShell 
# README-THIS IS AN DP IMPROVED PROGECT.
区间 DP是指在一段区间上进行的一系列动态规划。 对于区间 DP 这一类问题，我们需要计算区间 [1,n] 的答案，通常用一个二维数组 dp 表示，其中 dp[x][y] 表示区间 [x,y]。 有些题目，dp[l][r] 由 dp[l][r−1] 与 dp[l+1][r] 推得；也有些题目，我们需要枚举区间 [l,r] 内的中间点，由两个子问题合并得到，也可以说 dp[l][r] 由 dp[l][k] 与 dp[k+1][r] 推得，其中 l≤k&lt;r。 对于长度为 n 的区间 DP，我们可以先计算 [1,1],[2,2]…[n,n] 的答案，再计算 [1,2],[2,3]…[n−1,n]，以此类推，直到得到原问题的答案。
