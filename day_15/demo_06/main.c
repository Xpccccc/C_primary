#include <stdio.h>

void print(int n) {
    if (n > 0) {
        print(n / 10);
        printf("%d", n % 10);
    }
}

int main() {
    //递归方式实现打印一个整数的每一位
    int n = 0;
    scanf("%d", &n);
    print(n);
    return 0;
}
