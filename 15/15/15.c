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
//	if (n != 0)//��Ԫ������ƿ
//	{
//		if (n != 1)//һԪ����һƿ
//		{
//			if (n % 2 == 0)//ż��
//			{
//				return n + num(n / 2);//ż��ֱ�ӷ��ص�n�еĸ����ӵ�n-1�еĸ���
//
//				;
//			}
//			else//����
//			{
//				return (n - 1) + num((n / 2) + 1);//����ʱ�ɵ�n�����µ�һ��Ų����n-1�У���n-1�еĽ��м���
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
//	printf("������Ǯ����\n");
//	scanf("%d", &n);
//	printf("%dԪ���Ժ�%dƿ��ˮ����\n", n, 2 * n - 1);//����һ���ҹ��ɣ����ɸպ���nԪǮ�ܺ�2*n-1ƿˮ��
//	printf("%dԪ���Ժ�%dƿ��ˮ����\n", n, num(n));//���������õݹ�ķ������㣻
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
//	*dest = *str;//���ѡ�\0������*dest
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
//	while (*dest)//dest ָ��'\0'
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)//��dest��\0��ʼ��ֵ����str��\0ʱѭ������
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
