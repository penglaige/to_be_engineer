先把str换成list.
遍历该list,把每一个叶节点，即node value后面跟了两个#的节点换成#，其他的节点不变，压入新的preorder 的str中。
然后recursion调用solution函数。
如果最后pre == '#',说明是valid tree.
如果新的preorder == 旧的preorder,说明已经无法进行压缩了，返回false.
时间复杂度nlog(n)
