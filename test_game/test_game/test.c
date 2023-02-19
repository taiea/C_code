
#include"game.h"


void menu()
{
	printf("**********************\n");
	printf("****  1. 开始游戏 ****\n");
	printf("****  0. 退出游戏*****\n");
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void Test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}