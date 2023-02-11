#include <stdio.h>
#include <tgmath.h>

int is_sushu(int n) {
    int flag = 1;
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (1 == flag) {
        return 1;
    }
    if (0 == flag) {
        return 0;
    }
}
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
int main() {
    int count = 0;
    for (int i = 101; i <= 199; i += 2) {
        if (1 == is_sushu(i)) {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n素数%d个\n", count);
    return 0;
}
