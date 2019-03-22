+ 方向只有四个，反复循环，right->down->left->up->right.
+ 每次走完一条边，剩下的能走的上下限就会缩小。
+ 设置四边的限制，top_edge=-1,bottom_edge=m,left_edge=-1,right_edge=n.
+ for example, right 走完之后,top_egde就会+1，因为这条边已经走完了，就成为新的界限。
+ 需要注意的事，每次一个方向走完之后，i和j需要进行加减使i,j定位到下一条边的起始点。
