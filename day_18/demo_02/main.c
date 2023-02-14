#include <stdio.h>

//打印菱形
int main() {
    //菱形上半身包括中间
    for (int i = 1; i <= 7; ++i) {
        for (int j = 1; j <= 7 - i; ++j) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }
    // 菱形下半身不包括中间
    for (int i = 6; i >= 1; --i) {
        for (int j = 6 - i; j >= 0; --j) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
