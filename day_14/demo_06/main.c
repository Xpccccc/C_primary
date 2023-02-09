#include <stdio.h>

int main() {
    //打印1000年到2000年之间的闰年
    int count = 0;
    for (int i = 1000; i <= 2000; i++) {
        if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0))) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n闰年个数:%d\n", count);
    return 0;
}
