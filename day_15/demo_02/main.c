#include <stdio.h>

void Swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    //实现一个函数来交换两个整数的内容。
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    Swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
