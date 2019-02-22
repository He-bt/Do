#include<stdio.h>
#include<stdlib.h>

//void print_bit(int n)
//{
//	int i = 0;
//	//打印偶数位
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//
//	//打印奇数位
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//}
//int main()
//{
//	int num = 10;
//	//00000000000000000000000000001010
//	print_bit(num);
//	system("pause");
//	return 0;
//}

//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int n = 10;
//	int ret = count_one_bit(n);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}