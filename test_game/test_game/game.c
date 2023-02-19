#include"game.h"

// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
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

//打印初始棋盘
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		int j = 0;
		for (j= 0;  j< col; j++) //每行的格式 _*_|
		{
			
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");//每行的最后一列不要|
			}
		}
		printf("\n");

		if (i < row - 1)  //最下面一行不要分割
		{
			for (j = 0; j < row; j++)//分割行的格式
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");//分割行最后一列不要|

				}
			}
		}
		printf("\n");
	}
}

//玩家移动
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				PrintBoard(board, ROW, COL);
				break;
			}
			else
			{
				printf("该坐标已有棋子，请重新输入");
			}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}
	
}

//电脑移动
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:\n");
	while (1)
	{
		int x = rand() % row ;
		int y = rand() % col ;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			PrintBoard(board, ROW, COL);
			break;
		}
	}

}

//判断棋盘满了没
char IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'C';
			}
			
		}
	}
	return 'Q';
}

//判断输赢 
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	char ch = 0;
//	int i = 0;
//	for(i=0; i<row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && (board[i][0] != ' '))
//		{
//			return board[i][0];
//		}
//	}
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && (board[0][i] != ' '))
//		{
//			return board[0][i];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && (board[0][0] != ' '))
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && (board[1][1] != ' '))
//	{
//		return board[1][1];
//
//	}
//	/*
//	if (IsFull(board, row, col) == 1)
//	{
//		return 'Q';
//	}
//	return 'C';*/
//	return IsFull(board, row, col);
//	
//}


