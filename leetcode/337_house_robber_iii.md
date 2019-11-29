+ 我的思路是对的，分别计算该root节点抢和不抢的结果，取最大。
+ 但我的话把抢和不抢分开分别用同一个函数来recursion了，这样左右节点共两次一共就是4次递归。
+ 但是如果在一个function中同时算rob,not_rob的话，这样递归就只需要两次了。速度能快1倍。
+ 对当前节点： rob = root.val + left_not_rob + right_not_rob, not_rob = max(left_not_rob, left_rob) + max(right_rob, right_not_rob)
