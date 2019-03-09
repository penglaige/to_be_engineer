判断一个数组是不是回文数字,
创建一个新的数字,
该数字是原数字倒过来之后的数字,然后再判断新数字与原数字相不相等.

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long xx=0;
        int y=x;
        while(y!=0)
        {
            xx = xx*10 + y%10;
            y=y/10;
        }
        
        if(xx==x) return true;
        else return false;
    }
};
