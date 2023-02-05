//
// Created by 徐鹏 on 2023/2/5.
//

#ifndef DEMO_03_GAME_H
#define DEMO_03_GAME_H

#endif //DEMO_03_GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define COLS ROW+2
#define ROWS COL+2

//简单模式雷个数
#define EASY_COUNT 80

//初始化布局
void init_board(char board[ROWS][COLS], int rows, int cols, char set);

//展示布局
void display_board(char board[ROWS][COLS], int row, int col);

//布置雷
void set_mine(char board[ROWS][COLS], int row, int col);

//排雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);