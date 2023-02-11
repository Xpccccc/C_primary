#include <stdio.h>

int Fac1(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * Fac1(n - 1);
    }
}
int Fac2(int n) {
    int fac = 1;
    if (n <= 1)
        return 1;
    for (int i = 1; i <= n; ++i) {
        fac *= i;
    }
    return fac;
}
int main() {
    //递归和非递归分别实现求n的阶乘
    int n = 0;
    scanf("%d", &n);
    //递归
    int ret1 = Fac1(n);
    //非递归
    int ret2 = Fac2(n);
    printf("%d %d\n",ret1,ret2);
    return 0;
}
