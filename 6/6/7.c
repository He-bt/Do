#include<stdio.h>  
#include<stdlib.h>

//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		value = value&(value - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("输入一个无符号整数：");
//	scanf("%d", &num);
//	ret = count_one_bits(num);
//	printf("count=%d\n", ret);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num = 0, i = 0;
//	scanf("%d", &num);
//	printf("奇数序列为：");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数序列为：");
//	for (i = 30; i >= 0; i -= 2) 
//	{
//		printf("%d ", (num >> i) & 1);  //  
//	}
//	printf("\n");
//}
//
//int BitDiffer(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (; i < 32; i++)   
//
//	{
//		if (m % 2 != n % 2)
//		{
//			count++;
//		}
//		m /= 2;
//		n /= 2;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = BitDiffer(m, n);
//	printf("%d", ret);
//	system("pause");
//	return  0;
//}