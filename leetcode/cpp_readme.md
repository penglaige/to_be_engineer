# CPP MEMO

## 代码技巧
+ single quote -- char; double quote -- stirng;
```
int x = char - '0';
int x = char - 'a';
```
+ 使用map当做dictionary， 判断是否有key，可以用count来判断，有为1，没有为0.

## 常用技能
+ 查看数据结构byte数
```
sizeof(int);
```
+ c++ string to digit
```
string str1;
int myint = stoi(str1);
const char *str = "42";
int myint  = atoi(str);

long mylong = atol();
long mylong1 = stol();
long long mylonglong = atoll();
long long mylonglong = stoll();

unsigned long num = stoul();
unsigned long long num = stoull();
float num = stof();
double num = stod();
long double num = stold();

string str = to_string();
```
+ python string to number
```
a = "123"
s = int(a)

s = "12.3"
f = float(s)

num = 123
s = str(num)
```
## data structure
+ vector：
  - 赋值：vector<int> v = {};
  - 追加：push_back();
  - 除掉最后一个：pop_back();
+ sort
  - sort(target.begin(),target.end());
+ map
  - map定义的时候就是empty
  - 是否有key: map.count()==0;
  - insert: insert( pair<int,int>(1,1) );
  - 取值：[]
+ string
```
stirng::iterator it;
it = string.begin();
```
  - string.push_back();





