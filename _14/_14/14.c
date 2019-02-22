#include<stdio.h>
#include<stdlib.h>

//void left_move(char *p, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *p;
//		int j = 0;
//		while (*(p + 1 + j))
//		{
//			*(p + j) = *(p + j + 1);
//			j++;
//		}
//		*(p + j) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int num = 0;
//	printf("������ת����:");
//	scanf("%d", &num);
//	left_move(arr, num);
//	printf("��ת���ַ�����");
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


void LeftRotate(char* s, int k) {
	int len = strlen(s);
	char* p;
	char* q;
	for (p = s + k - 1; p >= s; --p) {
		for (q = p; q < p + len - k; ++q) {
			char tmp = *q;
			*q = *(q + 1);
			*(q + 1) = tmp;
		}
	}
}
//���� k ���ַ�    
void RightRotate(char* s, int k) {
	int len = strlen(s);
	char* p;
	char* q;
	for (p = s + len - k; p < s + len; ++p) {
		for (q = p; q > s; --q) {
			char tmp = *q;
			*q = *(q - 1);
			*(q - 1) = tmp;
		}
	}
}
//�ж� s1 �Ƿ�Ϊ s2 ��ת֮����ַ���
int isRotate(char* s1, char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2) {
		return 0;
	}
	char* s;
	int i;
	for (i = 0; i <= len1; ++i) {
		s = s1;
		LeftRotate(s, i);
		if (strcmp(s, s2) == 0) {
			return 1;
		}
		s = s1;
		RightRotate(s, i);
		if (strcmp(s, s2) == 0) {
			return 1;
		}
	}
	return 0;
}
int main() {
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	if (isRotate(s1, s2) == 1) {
		printf("����ת֮���\n");
	}
	else {
		printf("������ת֮��\n");
	}
	system("pause");
	return 0;
}