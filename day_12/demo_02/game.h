//
// Created by 徐鹏 on 2023/1/26.
//

#ifndef DEMO_02_GAME_H
#define DEMO_02_GAME_H

#endif //DEMO_02_GAME_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);

//打印棋盘
void display_board(char board[ROW][COL], int row, int col);

//玩家下棋
void player_move(char board[ROW][COL], int row, int col);

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);

//判断输赢
char is_win(char board[ROW][COL], int row, int col);