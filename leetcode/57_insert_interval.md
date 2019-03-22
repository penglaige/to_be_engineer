+ 思路不难，但是要注意一些边缘情况。
    - （1）interval 插在最前面
    - （2）interval 插在最后面
    - （3）interval 正好插在中间；
    - （4）interval有重叠：先找到第一个重叠的，然后从第一个重叠的继续往下看是否仍有重叠，途中记录start和end，等到发现第一个不重叠的时候，push_back(start,end)；
