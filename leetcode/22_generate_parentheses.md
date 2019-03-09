+ 使用一个vector<string> 记录答案
+ 使用两个int vector记录v中每个元素左括号和右括号的个数，
+ 然后每次遍历v,针对v中每个string,看是加左括号还是右括号，如果左右都能加，则inplace改动一个，另一个需要push_back。
+ 如此加2n-1次。
