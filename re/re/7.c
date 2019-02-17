#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//非递归实现n^k
//int fib1(int n)
//{
//	int c = 0;
//	int a = 1;
//	int b = 1;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int fib2(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib2(n - 1) + fib2(n - 2);
//}
//int main()
//{
//	int n = 10;
//	printf("%d\n", fib1(n));
//	printf("%d\n", fib2(n));
//	system("pause");
//	return 0;
//}

//递归实现n^k
//#include<stdio.h>
//
//int fun(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	return n*fun(n, k - 1);
//}
//int main()
//{
//	int n = 5;
//	int k = 3;
//	printf("n^k=%d\n", fun(n, k));
//	system("pause");
//	return 0;
//}
//

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//int fun(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	return n % 10 + fun(n / 10);
//}
//int main()
//{
//	int n = 55;
//	printf("%d\n", fun(n));
//	system("pause");
//	return 0;
//}

//编写一个函数reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。

//#include <stdio.h>  
//
//char * reverse_string(char *p)
//{
//	int n = 0;
//	char temp;
//	char *q;
//	//用q保存开始的p  
//	q = p;
//	//计算出字符串的大小  
//	while (*p != 0)
//	{
//		n++;
//		p++;
//	}
//	//保存第一个字符到一个变量中，  
//	//最后一个放到第一个的位置，  
//	//最后一个位置放'\0'，以此类推  
//	if (n > 1)
//	{
//		temp = q[0];
//		q[0] = q[n - 1];
//		q[n - 1] = '\0';
//		reverse_string(q + 1);
//		q[n - 1] = temp;
//	}
//	return q;
//}
//
//int main()
//{
//	char p[] = "dandanwa";
//	printf("原字符串是：%s\n", p);
//	printf("翻转后的字符串是：%s\n", reverse_string(p));
//	return 0;
//}

//递归和非递归分别实现strlen 
//#include<assert.h>
//int my_strlen1(const char *arr)//非递归
//{
//	int count = 0;
//	assert(arr);
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int my_strlen2(const char *arr)//递归
//{
//	assert(arr);
//	if (*arr == '\0')
//		return 0;
//	return 1 + my_strlen2(arr + 1);
//}
//int main()
//{
//	char arr[] = "abcdeg";
//	printf("%d\n", my_strlen1(arr));
//	printf("%d\n", my_strlen2(arr));
//	system("pause");
//	return 0;
//

//.递归和非递归分别实现求n的阶乘
//
//int fun1(int n)//非递归
//{
//	int i = 1;
//	int num = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		num = num + 1;
//		sum = num*sum;
//	}
//	return sum;
//}
//int fun2(int n)//递归
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n*fun2(n - 1);
//}
//int main()
//{
//	int n = 4;
//	printf("%d\n", fun1(n));
//	printf("%d\n", fun2(n));
//	system("pause");
//	return 0;
//}


//递归方式实现打印一个整数的每一位 

int _printf(int n)
{
	printf("%d", n % 10);
	printf(" ");
	if (n<10)
	{
		return 0;
	}
	return _printf(n / 10);
}
int main()
{
	int n = 123;
	_printf(n);
	system("pause");
	return 0;
}

