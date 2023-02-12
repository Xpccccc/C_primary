#include <stdio.h>

int Fab1(int n) {
    if (n <= 2)
        return 1;
    return Fab1(n - 1) + Fab1(n - 2);
}
int Fab2(int n) {
    int a = 1;
    int b = 1;
    int c = a + b;
    if (n <= 2)
        return 1;
    //从第三个开始
    for (int i = 3; i < n; ++i) {
        a = b;
        b = c;
        c = a + b;
    }
    return c;
}
int main() {
//    递归和非递归分别实现求第n个斐波那契数
    int n = 0;
    scanf("%d", &n);
    //递归实现
    int ret1 = Fab1(n);
    //非递归实现
    int ret2 = Fab2(n);
    printf("%d %d\n", ret1, ret2);
    return 0;
}
