#include "g.h"

void menu()
{
	printf("*********************\n");
	printf("*****  1.play  ******\n");
	printf("*****  0.exit  ******\n");
	printf("*********************\n");
}
void game()
{
	//��������
	char my[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(my, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	Displayboard(show, ROW, COL);
	//����
	Set_my(my, ROW, COL);
	//Displayboard(my, ROW, COL);
	//����
	FindMy(my, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ������\n");
			break;
		default:
			printf("�������������ѡ�񣡣�\n");
			break;
		}
	} while (input);
	return 0;
}
