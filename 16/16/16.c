#include <stdio.h>
#include <stdlib.h>

//void print(int *p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//void print(int(*p)[10], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(*p+i));
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//&arr;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(&arr, sz);
//	system("pause");
//	return 0;
//}

//void print(int (*p)[4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[5];
//	int *p = a;
//	*(p+2)  ==  p[2]
//
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	print(arr, 3, 4);
//	system("pause");
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int (*p)(int, int) = Add;
//	//printf("%d\n", *p(2,3));//err
//	printf("%d\n", (*p)(2,3));
//	printf("%d\n", Add(2,3));
//
//	system("pause");
//	return 0;
//}
