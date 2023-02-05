//
// Created by 徐鹏 on 2023/1/26.
//
#include "game.h"

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col) {
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++) {
        for (int j = 0; j < col; ++j) {
            board[i][j] = ' ';
        }
    }
}

//打印棋盘
void display_board(char board[ROW][COL], int row, int col) {
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++) {
        //   |   |
        //---|---|---
        //   |   |
        //---|---|---
        //   |   |

        //分为（   |   |   ）和（---|---|---）


        for (int j = 0; j < col; ++j) {
            //对（   |   |   ）进行打印
            printf(" %c ", board[i][j]);
            if (j < col - 1)//最右一列不打印
                printf("|");
        }
        printf("\n");

        //对（---|---|---）进行打印
        if (i < row - 1) {
            for (j = 0; j < col; j++) {
                printf("---");
                if (j < col - 1)//最右一列不打印
                    printf("|");
            }
            printf("\n");
        }

    }
}

//玩家玩游戏
void player_move(char board[ROW][COL], int row, int col) {
    //1、判断坐标合法性
    //2、判断坐标是否被占用
    int x = 0;
    int y = 0;
    printf("玩家下棋>:\n");
    while (1) {
        printf("请输入要落棋的坐标>:");
        scanf("%d %d", &x, &y);
        //判断坐标合法性
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            //坐标没有被占有
            if (' ' == board[x - 1][y - 1]) {
                board[x - 1][y - 1] = '*';//落子
                break;
            } else {
                printf("坐标被占用,请重新输入\n");
            }
        } else {
            printf("坐标非法,请重新输入\n");
        }
    }

}

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col) {
    printf("电脑下棋>:\n");

    while (1) {
        int x = rand() % row;
        int y = rand() % col;
        if (' ' == board[x][y]) {
            board[x][y] = '#';//落子
            break;
        }
    }
}

//判断棋盘是否满了
//1、满
//0、没满
int is_full(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (' ' == board[i][j])
                return 0;
        }
    }
    return 1;
}

//判断输赢
char is_win(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; ++i) {
        //判断行
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    }
    for (int i = 0; i < col; ++i) {
        //判断列
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[i][0] != ' ')
            return board[0][i];
    }
    //判断主对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    //判断副对角线
    if (board[2][0] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
        return board[1][1];
    //判断平局
    if (is_full(board, row, col) == 1)
        return 'Q';
    //继续游戏
    return 'C';
}