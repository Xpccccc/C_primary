#include <stdio.h>
#include <tgmath.h>

int main() {
    //打印100~200之间的素数
    int flag = 0;//flag为0是素数
    int count = 0;
    for (int i = 101; i < 199; i += 2) {
        flag = 0;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            count++;
            printf("%d ", i);
        }
    }
    printf("素数个数:%d\n", count);
    return 0;
}
