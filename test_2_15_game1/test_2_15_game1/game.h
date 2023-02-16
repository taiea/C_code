#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Init_board(char board[ROW][COL], int row, int col);
void Print_board(char board[ROW][COL], int row, int col);
void Play_move(char board[ROW][COL], int row, int col);