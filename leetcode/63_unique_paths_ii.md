+ dynamic programming
+ 需要注意的是，先判断goal是什么状态
+ 然后最后一列和最后一行先历一遍，有obstacle就=0，没有obstacle就等于前一个格子的dp。
+ 然后再历剩下的格子，时间复杂度是O(mn)
