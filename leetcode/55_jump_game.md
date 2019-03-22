+ greedy algorithm.
+ 记录能跳的最远的位置，如果当前位置加上当前能跳的距离大于can_reach，并且当前位置在上一个can_reach的范围内，则更新can_reach, 并且用R记录上一个can_reach位置，同时更新R和can_reach.
