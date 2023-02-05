#include "game.h"

void menu() {
    printf("******************************\n");
    printf("********   1、play   *********\n");
    printf("********   0、exit   *********\n");
    printf("******************************\n");
}

void game() {
//    printf("开始游戏\n");
    char mine[ROWS][COLS] = {0};
    char show[ROWS][COLS] = {0};
    srand((unsigned int) time(NULL));
    //初始化mine数组
    init_board(mine, ROWS, COLS, '0');
    //初始化show数组
    init_board(show, ROWS, COLS, '*');

    //布置雷
    set_mine(mine,ROW,COL);
    display_board(mine, ROW, COL);
    display_board(show, ROW, COL);
    //display_board(mine, ROW, COL);
    //排雷
    find_mine(mine,show,ROW,COL);
    //display_board(mine, ROW, COL);
    //display_board(show, ROW, COL);
}

int main() {
    int input = 0;
    do {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    } while (input);
    return 0;
}
