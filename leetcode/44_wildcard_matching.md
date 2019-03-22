+ DP
+ n = s.size(), m = p.size()
+ dp[i][j] 表示s和前i-1个字符和p的j-1的字符是否匹配。
+ 但是dp行和列都要多一行，dp[0][i]表示s[0]之前的空白字符的匹配，dp[i][0]表示s和p[0]前的空白字符的匹配。
+ 初始值：dp[0][0],dp[0][i]和dp[i][0]
+ 遍历i和j：O（mn)
+ if p[j-1] == '*'： dp[i][j] = dp[i-1][j] || dp[i][j-1]
+ else:
+ .......
+ return dp[n][m]
