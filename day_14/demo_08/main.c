#include <stdio.h>

int main() {
    //    在屏幕上输出9*9乘法口诀表
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; ++j) {
            printf("%d*%d=%-4d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
