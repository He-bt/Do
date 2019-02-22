#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	int arr[10] = { 1, 2, 9, 3, 7, 3, 2, 5, 5, 7 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr[i];
//		for (j = 0; j < 10; j++)
//		{
//			if ((i != j) && (arr[j] == tmp))
//			{
//				break;
//			}
//		}
//		if (j == 10)
//		{
//			printf("%d\n", tmp);
//		}
//	}
//	system("pause");
//	return 0;
//}
//

//int num(int n)
//{
//	if (n != 0)//零元返回零瓶
//	{
//		if (n != 1)//一元返回一瓶
//		{
//			if (n % 2 == 0)//偶数
//			{
//				return n + num(n / 2);//偶数直接返回第n行的个数加第n-1行的个数
//
//				;
//			}
//			else//奇数
//			{
//				return (n - 1) + num((n / 2) + 1);//奇数时吧第n行余下的一个挪到第n-1行，按n-1行的进行计算
//			}
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入钱数：\n");
//	scanf("%d", &n);
//	printf("%d元可以喝%d瓶汽水！！\n", n, 2 * n - 1);//方法一：找规律，规律刚好是n元钱能喝2*n-1瓶水；
//	printf("%d元可以喝%d瓶汽水！！\n", n, num(n));//方法二：用递归的方法计算；
//	system("pause");
//	return 0;
//}

//char* my_strcpy(char* dest, const char* str)
//{
//	const char* ret = str;
//	assert(str);
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	*dest = *str;//最后把‘\0’赋给*dest
//}
//
//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[10] = { '0' };
//
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	system("pause");
//	return 0;
//}


//char* my_strcat(char* dest, const char* str)
//{
//	const char* ret = str;
//	assert(str);
//	while (*dest)//dest 指向'\0'
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)//给dest从\0开始赋值，到str的\0时循环结束
//	{
//		;
//	}
//	*dest = *str;//*dest = '\0';
//	return (char *)ret;
//}
//int main()
//{
//	char arr1[] = "fdaifnd";
//	char arr2[10] = "bc";
//	my_strcat(arr2, arr1);
//	printf("%s\n", arr2);
//	system("pause");
//	return 0;
//}
