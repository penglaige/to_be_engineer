+ 如果一个数是ugly number,那么这个数乘以2，3，5也都是ugly number,依次进行类推。
+ 这里需要注意的是，需要使用minimum heap和hash table来对将要进行处理的数进行排序和过滤。
+ heap是每次排除的数都是当前序列总的最小数。
+ hash table防止重复的数加入队列中。
+ 这里需要注意的是hash table放的位置，应该是在当前数*factor没有在序列里的话，在正好加入序列之前，把这个数放到visited里头去。实在加入序列的时候变visited而不是在处理的时候变visited.!
