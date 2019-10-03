# Chapter  4

## 复习题

### 1. 重新运行程序4_1，如果中间存在空格则结果如何？

可以发现scanf会被中间的空格给分开。

### 2. 什么情况下要使用long代替int？

> 如果需要表示的数值大于int所能够表示的最大范围（一般是32位有符号二进制数），则long。

### 3. 使用哪些可移植的数据类型可以获得32位有符号整数？选择的理由是什么？

```c
#include<stdint.h>
#include<inttypes.h>

int32_t test = 56;

// 选择的理由是：这样可以明确规定变量的位数。
```

### 4. 指出下列常量的类型和含义？

> - a. 字符类型，转义字符，表示退格
>
> - b. 整数类型（有无符号不确定），无
> - c. 浮点类型（默认是double类型），无
> - d. 整数类型，十六进制，10 + 16 * 10 = 170，无
> - e. 浮点类型（默认是double类型），无

### 5. 指出程序中的错误？

```c
include <stdio.h>    // 格式规范：不能有空格
main				 // 语法错误：返回值类型，小括号，输入形参
{
	float g; h;      // 语法错误，分号应改为逗号
	float tax, rate; // 语法错误：没有初始化，后边会用到
	
	g = e21;         // 语法错误：e21没有声明和定义
	tax = rate*g;    // 格式规范：乘号左右加空格
}					 // 语法错误：缺少return语句
```

### 6. 写出下列常量在声明中使用的数据类型和在printf()中对应的转换说明。

|常量|类型|转换说明(%转换字符)|
|--|--|--|
|12|int|%d|
|0X3|int|%d、%x、%#x|
|'c'|char|%c、%d|
|2.34E07|double|%f|
|'\\040'|char|%c、%d（这个符号是32）|
|7.0|double|%f|
|6L|long|%ld|
|6.0f|float|%f|
|0x5.b6p12|double|%f|

### 7. 写出下列常量在声明中使用的数据类型和在printf()中对应的转换说明（假设int为16位）？

|常量|类型|转换说明(%转换字符)|
|--|--|--|
|12|int|%d|
|2.9e05L|long double|%lf|
|'s'|char|%c、%d|
|100000|long|%ld（因为16位最大65535）|
|'\\n'|char|%c、%d（这个符号是回车）|
|20.0f|float|%f|
|0x44|int|%d、%x、%#x|
|-40|int|%d|

### 8. 把下面printf语句中的转换字符补充完整？

```c
int imate = 2;
long shot = 53456;
char grade = 'A';
float log = 2.71828;

printf("The odds against the %d were %ld to 1.\n", imate, shot);
printf("A score of %f is not an %c grade.\n", log, grade);
```

### 9. 假设ch是char类型的变量。分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋给ch（假设使用ASCII编码值）？

```c
char ch = 13;
char ch = 015;
char ch = 0xd;
char ch = '\r';
char ch = '\015';
char ch = '\xd';

// 注意这里只是回车，码值为13，作用是回到当前行的起始端，而换行'\n'的值是10。
```

### 10. 修正下面的程序

```c
void main(int) / this program is perfect /
{
    cow, legs integer;
    printf("How many cow legs did you count?\n");
    scanf("%c", legs);
    cows = legs / 4;
    printf("That implies there are %f cows.\n", cows);
}

// 问题：
// 行号1. 注释应为：/**/
// 行号3. 声明变量错误
// 行号5：没有考虑scanf错误，legs未初始化导致的bug
// 行号6：cows的类型不匹配，应为float类型，强制类型转换
```

### 11. 指出下列转义序列的含义

> - a. \n 换行
> - b. \\ \ 表示一个斜杠
> - c. \\" 表示一个引号
> - d. \\t 表示一个制表符

## 编程练习

略
