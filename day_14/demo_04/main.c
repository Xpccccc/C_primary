#include <stdio.h>

int main() {
    //写代码将三个整数数按从大到小输出。
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a < c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b < c) {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d\n", a, b, c);

    return 0;
}
