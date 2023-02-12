#include <stdio.h>

int DigitSum(int n) {
    if (n > 0) {
        return n % 10 + DigitSum(n / 10);
    }
    return 0;//当n=0时
}

int main() {
    //计算一个数的每位之和（递归实现）
    int n = 0;
    scanf("%d", &n);
    int ret = DigitSum(n);
    printf("%d\n", ret);
    return 0;
}
