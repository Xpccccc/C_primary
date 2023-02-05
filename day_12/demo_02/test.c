
#include "game.h"

void menu() {
    printf("***********************\n");
    printf("******  1、play  ******\n");
    printf("******  0、exit  ******\n");
    printf("***********************\n");
}

void game() {
    //printf("开始游戏\n");
    //棋盘
    char ret = 0;
    char board[ROW][COL] = {0};//初始化数组
    //初始化棋盘
    init_board(board, ROW, COL);
    //打印棋盘
    display_board(board, ROW, COL);
    //玩游戏
    while (1) {
        player_move(board, ROW, COL);
        display_board(board, ROW, COL);

        ret = is_win(board, ROW, COL);
        //返回值不是继续的信号
        if (ret != 'C')
            break;

        computer_move(board, ROW, COL);
        display_board(board, ROW, COL);

        ret = is_win(board, ROW, COL);

        //返回值不是继续的信号
        if (ret != 'C')
            break;
    }
    if (ret == '*') {
        printf("玩家赢\n");
    } else if (ret == '#') {
        printf("电脑赢\n");
    } else if (ret == 'Q') {
        printf("平局\n");
    }
}

//电脑赢
//玩家赢
//平局
//继续游戏

int main() {
    int input = 0;
    srand((unsigned int) time(NULL));
    do {
        menu();
        printf("请输入>:");
        scanf("%d", &input);
        switch (input) {
            case 0:
                printf("退出游戏\n");
                break;
            case 1:
                game();//开始游戏
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    } while (input);
    return 0;
}
