+ 只要记录最低价格即可。因为每当出现一个更低价的时候，针对前面那个低价的计算已经全部完成了。只需要针对新的出现的这个最低价即可。代码也很简单，几行就可以完成了。
+ 这里要注意一个，如果记录每天的profit，那么如果前一天卖的profit比今天高，那么今天的profit应该是等于前一天的，而不是今天的价格减去最低价。
