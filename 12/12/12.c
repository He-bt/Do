#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <assert.h>

//int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int ret = 0;
//	int bit = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret = ret << 1;
//		bit = value & 1;
//		value = value >> 1;
//		ret = bit | ret;
//
//	}
//	return ret;
//}
//int main()
//{
//
//	printf("%u\n", reverse_bit(2550136832));
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1, 5, 1, 2, 2 };
//	int ret = arr[0];
//	printf("arr = %d ", arr[0]);
//	int i = 0;
//	for (i = 1; i < 5; i++)
//	{
//		ret ^= arr[i];
//		printf("%d ", arr[i]);
//
//	}
//	printf("\nThe number is %d\n", ret);
//	return 0;
//}

int my_strlen(const char *str)//Çó×Ö·û´®³¤¶Èº¯Êı
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{

		count++;
		str++;
	}
	return count;


}
void reverse(char a[], int left, int right)//ÄæĞòº¯Êı
{
	while (left<right)
	{
		char tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}

}
char* reverse_string(char a[])//ÄæĞò×Ö·û´®
{
	int i = 0;
	int left = 0;
	int right = my_strlen(a) - 1;//ÄæĞòÕû¸ö×Ö·û´®
	reverse(a, left, right);
	//ÄæĞòÖğ¸öµ¥´Ê
	while (a[i] != '\0')
	{
		left = i;
		while ((a[i] != '\0') && (a[i] != ' '))
		{
			i++;

		}
		right = i - 1;
		reverse(a, left, right);
		if (a[i] != '\0')
			i++;
	}
	return a;
}

int main()
{
	char a[] = "student a am i";
	reverse_string(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}
