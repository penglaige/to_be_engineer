+ 我的思路是遍历每一行r，每一行开头的1位置是i,结尾的1的位置是j，对于每一个i,j从i开始一直遍地到为0，对于每一个j, 固定住i和j,往下遍历其他的行数k,一直到某一行不i-j之间不全为0为止。
+ k遍历完之后计算ans，ans = max(ans, (k-r) * （j-i+1)
