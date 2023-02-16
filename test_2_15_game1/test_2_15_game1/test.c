#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("******  1. paly  ******\n");
	printf("******  0. exit  ******\n");
	printf("***********************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	Init_board(board, ROW, COL);
	Print_board(board, ROW, COL);
	printf("玩家走,请输入坐标>:");
	Play_move(board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			//printf("hehe\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输出错误 重新输入\n");
			break;
		}
	} while (input);
	return 0;
}