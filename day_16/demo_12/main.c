#include <stdio.h>

int main() {
//打印整数二进制的奇数位和偶数位
    int n = 0;
    scanf("%d", &n);
    printf("从右往左偶数二进制位：");
    for (int i = 1; i <= 31; i += 2) {
        printf("%d ", (n >> i) & 1);
    }
    printf("\n从右往左奇数二进制位：");
    for (int i = 0; i <= 30; i += 2) {
        printf("%d ", (n >> i) & 1);
    }
    return 0;
}
