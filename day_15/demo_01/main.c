#include <stdio.h>

int main() {
    //    实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
    int input = 0;
    scanf("%d",&input);
    for (int i = 1; i <= input; i++) {
        for (int j = 1; j <= i; ++j) {
            printf("%-2d*%d=%-4d", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

