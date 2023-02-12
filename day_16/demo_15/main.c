#include <stdio.h>

int run_count(int n) {
    //只有一个台阶
    if (1 == n)
        return 1;
    //只有两个台阶
    if (2 == n)
        return 2;
    //第一下可以走1个台阶，也可以走两个台阶，剩下的台阶继续按照第一下的走法
    return run_count(n - 1) + run_count(n - 2);
}

// 小乐乐走台阶，每次可以选择走一阶或者走两阶，那么他一共有多少种走法
int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = run_count(n);
    printf("%d\n", ret);
    return 0;
}