+ 如果m和n同时比2^(k)大比2^(k+1)小的话那么res = 2^k + recursion(m - 2^k,n - 2^k)
+ 如果n 比m 不在同一个2^k的区间的话，那么res=0
