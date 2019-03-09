+ solution1:
    - dp:dp[i]代表到s[i]为止最长的valid string长度。
    - 如果s[i] = ) ans s[i-1] =(, dp[i] = dp[i-2]+2;
    - 如果s[i] = ) and s[i-1] = ), 那就检查s[i-dp[i-1]-1] 是否为(，如果是的话，那么dp[i]=dp[i-1]+2+[i-do[i-1]-2].这里计算的时候要注意s[-1]之类的移除。

