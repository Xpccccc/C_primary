#include <stdio.h>

int main() {
    //编写程序数一下 1到 100 的所有整数中出现多少个数字9
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 10 == 9 || i / 10 == 9) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d\n",count);
    return 0;
}
