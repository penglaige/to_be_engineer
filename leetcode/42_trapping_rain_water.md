- solution1
+ 我的思路，三个pointer, l,m,r，遍历array，找到局部的坑，计算当前局部坑的储水量，然后填上这个坑。
+ 将所有的局部的坑填上之后继续遍历继续填坑，直到存到的水的数量不再变化。

- solution2
+ two pointer:
+ l,r,l_max和r_max.
+ 每次移动小的那一端，移动的时候先比较height[l] 和l_max,如果l_max 比较大，那说明可以存水了（始终是左边最大的那一端，中间的小高峰局部解都不会影响，因为右边更高。）如果height[l]比较大，那么更新l_max。
