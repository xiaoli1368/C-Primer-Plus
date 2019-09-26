# Chapter  2

## 复习题

### 1. C语言的基本模块是什么？

> 函数。

### 2. 什么是语法错误？

> 不符合C语言的语法规范的错误，如语句的结尾不适用分号。

### 3. 什么是语义错误？

> 编写的程序没有运行错误，但是与程序的初始设计要求不符。

### 4. 修改程序？

> 为了锻炼，以下把源代码手打一遍：

```c
include<studio.h>
int main{void} /* 该程序打印一年有多少周 */
{
    int s
        
    s := 56
    print(There are s weeks in a years.);
    return 0;
```

错误主要有：

> - 头文件错了，应该是 stdiol.h
> - main函数后边应该是小括号
> - int s 后边应该加分号
> - s := 56 这个好像没有见过
> - 下一行应该是 printf , print 是 python，且应该加引号
> - 最终应该有右花括号

### 5. 输出什么结果？

结果应该是：

```c
Baa Baa Black Sheep.Have you any wool?
Begone!
O creature of lard!
What?
No/nfish?
2 + 2 = 4
```

### 6. 哪些是关键字？

> main  int  char 

### 7. 如何进行格式化输出？

```c
printf("There were %d words and %d lines.", words, lines);
```

### 8. 程序的状态是什么？

> a = 5 
>
> b = 5

### 9. 程序的状态是什么？

> x = 150
>
> y = 15

## 编程练习

### 1. 题目略去

**总结：**

程序见源代码，尽管这个程序最终编出来只有45行，但是其中有一些需要注意的知识点值得总结：
