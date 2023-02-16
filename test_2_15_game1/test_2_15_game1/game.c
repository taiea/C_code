#include"game.h"

void Init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Print_board(int board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		
	    printf("   |   |   ");
		printf("\n");
		if (i < row - 1)
		{
			printf("___|___|___");
			printf("\n");
		}
		else
		{
			printf("   |   |   ");
			printf("\n");
		}
	}
}

void Play_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	if (board[x - 1][y - 1] == ' ')
	{
		board[x][y] = '*';
		printf("%s\n", board);
	}
	else
	{
		printf("坐标错误，请重新输入：");
	}
}