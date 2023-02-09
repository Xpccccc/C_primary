#include <stdio.h>

int main() {
    //给定两个数，求这两个数的最大公约数
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d", &a, &b);
    int d = a * b;//a和b的乘积
    //辗转相除法
    while (a % b) {
        c = a % b;//余数
        a = b;
        b = c;
    }
    printf("最大公约数%d\n", b);
    printf("最小公倍数%d\n", d / b);
    return 0;
}
