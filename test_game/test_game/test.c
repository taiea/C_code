
#include"game.h"


void menu()
{
	printf("**********************\n");
	printf("****  1. ��ʼ��Ϸ ****\n");
	printf("****  0. �˳���Ϸ*****\n");
	printf("**********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	PrintBoard(board, ROW, COL);
	
	while (1)
	{
		PlayMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
        if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void Test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}