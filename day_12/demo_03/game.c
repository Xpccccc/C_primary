//
// Created by 徐鹏 on 2023/2/5.
//
#include "game.h"


//初始化布局
void init_board(char board[ROWS][COLS], int rows, int cols, char set) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            board[i][j] = set;
        }
    }
}

//展示布局
void display_board(char board[ROWS][COLS], int row, int col) {
    //显示列号
    for (int i = 0; i <= row; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    for (int i = 1; i <= row; ++i) {
        //显示行号
        printf("%d ", i);
        for (int j = 1; j <= col; ++j) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

//布置雷
void set_mine(char board[ROWS][COLS], int row, int col) {
    int count = EASY_COUNT;
    while (count) {
        int x = rand() % row + 1;//比内层多了一圈所以得+1
        int y = rand() % col + 1;
        //防止在一个地方重复布置
        if (board[x][y] == '0') {
            board[x][y] = '1';
            count--;
        }
    }
}

int get_mine_count(char mine[ROWS][COLS], int x, int y) {
    return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] +
            mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

//排雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
    int x = 0;
    int y = 0;
    int win = 0;
    while (win < row * col - EASY_COUNT) {
        printf("请输入要排雷的坐标:>");
        scanf("%d %d", &x, &y);
        if (show[x][y] == '*') {//防止重复排雷
            if (x >= 1 && x <= row && y >= 1 && y <= col) {
                if (mine[x][y] == '1') {
                    printf("很遗憾你被炸死了\n");
                    display_board(mine, row, col);
                    break;
                }
                int count = get_mine_count(mine, x, y);
                show[x][y] = count + '0';
                display_board(show, row, col);
                win++;
            } else {
                printf("输入的坐标非法\n");
            }
        }
    }
    
    if (win == row * col - EASY_COUNT) {
        printf("你赢了\n");
        display_board(mine, row, col);
    }

}