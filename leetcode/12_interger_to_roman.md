+ 使用map逆向迭代，对于3000这种，一次减一个1000，这样迭代。
+ std_::map<int, std:string> map = {{},{}};
+ for (auto iter = map.rbegin();iter!=map.rend();iter++)
