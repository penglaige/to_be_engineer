# CPP MEMO

## 标准输入流
+ cpp 键盘输入
```
#include<iostream>

//standard output
cout<<"output"<<endl;

//standard input
int age;
cin>>age;

cin >> a >> b;
==
cin >> a;
cin >> b;

// cin and string
#include <string>

stirng mystr;
getline (cin, mystr);

//stringstream

string mystr ("1204");
int myint;
stringstream(mystr) >> myint;

// cerr
cerr << "An error occured";

// clog
clog << "An error occured";
```
+ cpp 读取文件
```
#include <stdio.h>

int main()
{
    FILE *pFile;
    char mystring [100];

    pFile = fopen("myfile.txt","r");
    if(pFile == NULL) perror ("Error opening file");
    else
    {
        if(fgets(mystring,100,pFile)!= NULL) puts (mystring);
        fclose(pFile);
    }
    return 0;
}

string str;
while(getline(pFile,str))
{
    cout<< str << endl;
}
```
+ python 键盘输入
```
str = input("please input sth")
```
+ python 读取文件
```
fp = open('path/file.txt','r')
fp.close()

with open('path/file.txt') as fp:
    // read : read all the data into one text string
    // readline(): read line by line
    // readlines(): read all lines and return them as a list of strings
    line = fp.readline()
    cnt = 1
    while line:
        print("Line {} : {}".format(cnt,strip()))
        line = fp.readline()
        cnt += 1

    // way 2
    for cnt,line in enumerate(fp):
        print("Line {}: {}".format(cnt,line))


try:
    fp = open('...')
    ...
finally:
    fp.close()

```

## argv parse
+ cpp
```
int main(int argc, char* argv[])
{
    // argv contains the actual command-line arguments as an array of strings
    // do sth here
    return 0;
    if(argc < 2)
    {
        // Show help, tell the user how to run the program
        std::cerr << "Usage: " << argv[0] << "Name" << std::endl;
        return 1;
    }
    return 0;
}
```
+ python
```

```
## 代码技巧
+ i & 1 == 1, i为奇数，否则为偶数，用来判断奇偶数
+ single quote -- char; double quote -- stirng;
```
int x = char - '0';
int x = char - 'a';
```
+ 使用map当做dictionary， 判断是否有key，可以用count来判断，有为1，没有为0.
+ python3,dictionary value sort:
```
dict = {}
sorted_by_value = sorted(dict.items(),key = lambda kv:kv[1])
for key, value in sorted_by_value:
    ......
```
## 常用技能
+ c++ sort
  - sort(iterator.first,iterator.second,compare comp);
  - 其中compare comp是一个函数
```
bool myfunction (int i,int j) { return (i<j);  }
std::sort (myvector.begin()+4, myvector.end(), myfunction);
```
+ c++ power: std::pow(x,n);
+ c++ 整除
  - （int)(a+b);
+ python整除：
  - c = a // b
  - c = int(a/b)
+ pass array to function,3 ways:因为传递的是地址，所以传递的是实参
```
// 1
void function(int *param)
{

}

//2
void function(int param[10])
{

}

//3 
void function(int param[])
{

}

```
+ infinity
  - INT_MAX
  - INT_MIN
+ 查看数据结构byte数
```
sizeof(int);
```
+ c++ int number to char: char c = '0' + i;
+ c++ string to digit
+ atoi只能转char*,如果只是char的话,参考下文。
```
string str1;
int myint = stoi(str1);
const char *str = "42";
int myint  = atoi(str);
int num = char - '0';

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
+ struct
    - struct 对象创建；
    - struct 内部也可以写函数，默认为public；
    - 如果从指针开始创建，则需要malloc
```
// class ではなくて struct
struct person{
    int id;
    int age;
    std::string name;

    // 情報を出力する関数
    void
    print(){
        std::cout << "id:"   << id << std::endl;
        std::cout << "age:"  << age << std::endl;
        std::cout << "name:" << name << std::endl;
                                                
    }
};

person homu = { 0, 14, "homu"  };
homu.print();
```
    - 直接创建指针：
```
struct Node* head = NULL;
void insert(int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    // struct Node* new_node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

}
```
+ vector：
  - 赋值：vector<int> v = {};
  - 追加：push_back();
  - 除掉最后一个：pop_back();
  - 2d vector: vector<vector<int>> vect;
  - vector 定义大小赋值，比如说想要一个nxn的二维矩阵：
```
vector<class> ants(num_ants);
vector<int> v (n,0);
vector<vector<int>> dp (n,v);
```
  - vector slice:
```
v2 = std::vector<int>(v1.begin()+i,v1.end());
```
  - 定义vector做参数的函数，注意&,不对，如果是需要复制过去使用同一个变量的话需要&，不是同一个的话不需要的：
```
void function(vector<int> &param,.....)
{

}
```
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

## compile memo
+ gcc for c, g++ for c++
+ g++ -o name name.cpp



