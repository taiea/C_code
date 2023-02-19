#include"game.h"

// ��ʼ������
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

//��ӡ��ʼ����
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{

		int j = 0;
		for (j= 0;  j< col; j++) //ÿ�еĸ�ʽ _*_|
		{
			
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");//ÿ�е����һ�в�Ҫ|
			}
		}
		printf("\n");

		if (i < row - 1)  //������һ�в�Ҫ�ָ�
		{
			for (j = 0; j < row; j++)//�ָ��еĸ�ʽ
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");//�ָ������һ�в�Ҫ|

				}
			}
		}
		printf("\n");
	}
}

//����ƶ�
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������Ҫ�µ�����:>");
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
				printf("�������������ӣ�����������");
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
	
}

//�����ƶ�
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:\n");
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

//�ж���������û
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

//�ж���Ӯ 
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


