+ 本来我的想法是stack,相同的就压进去，不同的pop出来。大多数的那一个一定会留下。
+ 但是不用stack,使用res和count就可以实现了。count=0的时候res=nums[i],再然后相同的就count++,不同的就count--。
