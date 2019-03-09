1. 函数声明需要一次,提供一个函数名,结尾要写;
2. 函数定义可在任何地方进行, {}不需要;
3. 外部变量声明 extern int a,b;
4. Using namespace std
5. 在所有函数外部定义的变量为全局变量
6. 以下是各种类型的常数
	85         // 十进制
	0213       // 八进制 
	0x4b       // 十六进制 
	30         // 整数 
	30u        // 无符号整数 
	30l        // 长整数 
	30ul       // 无符号长整数
7. 字符常量:
	\\   \
	\`   `
	\"   "
	\?  ?
	\n  换行符
	\t 水平制表符
	\v 垂直制表符
8.定义常量: #define LENGTH 10 (不需要;,写在函数外)
		const int  LENGTH = 10; (需要;,写在函数里面)
9. static int count; 会使这个值被全体函数共享,创建一次之后不会被重新创建和销毁
10. extern 提供一个对全局变量的引用, 比如有多个文件, 在其中一个文件中定义了某个变量或函数,其他文件想用这个变量就要extern

11. cout << ??? << endl;

12. c++数学运算,需要 #include<cmath>
	double sin(double); 弧度角
	double cos(double);
	double tan(double);
	double log(double);
	double pow(double, double); x的y次方
	double hypot(double, double);
	double sqrt(double);
	int abs(int);
	double fabs(double);
	double floor(double);

13. C++随机数
	一个是 rand()，该函数只返回一个伪随机数。生成随机数之前必须先调用 srand() 函数。
	#include <cstdlib>
	srand( (unsigned)time( NULL ) ); 设置种子
	j= rand();
	
14. 数组:
	声明 double a[10];
	定义 double a[2] = {};
    数组名就是一个指针!!但数组名是一个常量 不能进行运算!!
    多维数组: ind a[5][4][3];
    返回数组的函数 要使用 int * function_name(){}

15. 字符串
	由于在数组的末尾存储了空字符"\0"，所以字符数组的大小比单词 "Hello" 的字符数多一个。
	#include <cstring>

	strcpy(s1, s2); 复制字符串 s2 到字符串 s1。
	strcat(s1, s2); 连接字符串 s2 到字符串 s1 的末尾。
	strlen(s1); 返回字符串 s1 的长度。
	strcmp(s1, s2); 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
	strchr(s1, ch); 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
	strstr(s1, s2);	返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。

	#include <string>

	string str1 = "Hello";
   	string str2 = "World";
   	string str3;

	str3 = str1 + str2;
	len = str3.size();

16. 指针
	*p 其中p是地址, *p是变量
	&a, 其中a是变量, &a是地址

	int *ip;  是指针变量,
	double *dp;  因为定义的是变量不是地址,定义了一个指针变量

	空指针: int *ptr = NULL
	指针数组: 想要让数组存储指向 int 或 char 或其他数据类型的指针。下面是一个指向整数的指针数组的声明:
		int *ptr[MAX]; ptr[0]里面存的是指针,指针指向的数都是int(前面定义过的)
	指向指针的指针:
		int **var; 
	传递指针给函数:
		void getSeconds(unsigned long *par); 注意,这里传进去的是一个指针,而不是具体的函数值,因为进去的变量是par,而不是*ptr,所以要传进去一个地址
		能接受指针做参数,也可以接受数组
	从函数返回指针:
		int * getRandom( ){}
		怎么接受这个值:
		int *p
		p = getRandom();

17. 引用: (1)引用不可以重新链接, (2) 不存在空引用,引用必须在创建时被初始化。指针可以在任何时间被初始化
	int i = 17;
	int&  r = i;
	double& s = d;
	把引用作为参数:
		void swap(int& x, int& y);
		swap(a, b); x作为a的引用,直接输入a即可
	把引用作为返回值:
		当函数返回一个引用时，则返回一个指向返回值的隐式指针。这样，函数就可以放在赋值语句的左边。
		double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
 
		double& setValues( int i )
		{
 		 return vals[i];   // 返回第 i 个元素的引用
		}
		
		当返回一个引用时，要注意被引用的对象不能超出作用域。所以返回一个对局部变量的引用是不合法的，但是，可以返回一个对静态变量的引用。
		int& func() {
		   int q;
		   //! return q; // 在编译时发生错误
		   static int x;
		   return x;     // 安全，x 在函数作用域外依然是有效的
		}
18. 日期和时间
	标准输入流:
		cin >> name;
	标准错误流:
		cerr << "Error message : " << str << endl;
	标准日志流:
		clog << "Error message : " << str << endl;

19.数据结构
	struct type_name {
	member_type1 member_name1;
	member_type2 member_name2;
	member_type3 member_name3;
	.
	.
	}; 声明一个数据结构
	
	定义: type_name 变量名;
	直接使用元素用 .
	指针使用元素用 ->
	结构作为函数参数: void printBook( struct Books book ); 注意变量里头要带struct
	指向结构的指针: struct Books *struct_pointer;
	typedef 关键字?

20. Std::string tutorial

1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.

2. push_back() :- This function is used to input a character at the end of the string.

3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.
	
	
	


	